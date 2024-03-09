#include "hash_tables.h"
/**
* hash_table_set - Adds an element/data item to the hash table
* @ht: A pointer to HashTable
* @key: The key of the data/element
* @value: The value of the data/element
*
* Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code;
	hash_node_t *new_item;
	hash_node_t *head = NULL;

	if (!ht || !key)
		return (0);
	hash_code = key_index((const unsigned char *)key, ht->size);
	head = ht->array[hash_code];
	while (head)/*......Updates key to new value.......*/
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = str_dup(value);
			return (1);
		}
		head = head->next;
	}
	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);
	new_item->key = str_dup(key);
	new_item->value = str_dup(value);
	new_item->next = NULL;
	return (store_item(ht, new_item, hash_code));
}
/**
* store_item - Put an item in their respective slot/backet
* @table: The HashTable
* @hash_code: Index of the slot/backet to hold an item
* @new_item: The data to store.
*
* Return: 1 on success.
*/
int store_item(hash_table_t *table, hash_node_t *new_item,
	       unsigned long int hash_code)
{
	if (table->array[hash_code] == NULL)
	{
		table->array[hash_code] = new_item;
	}
	else /** This part handle the collision of key_code*/
	{
		new_item->next = table->array[hash_code];
		table->array[hash_code] = new_item;
	}
	return (1);
}
/**
* str_dup - Duplicates a string to new memory area
* @str: The string to be duplicated.
*
* Return: Pointer to the duplicated string
*/
char *str_dup(const char *str)
{
	char *dup = NULL;
	int len = 0;

	len = str_len(str);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	dup = _memcpy(dup, str, len);
	return (dup);
}
/**
* _memcpy - Copy a source memory content to destination.
* @src: The source string
* @dest: A destination for a source string
* @len: The length of source string
*
* Return: Pointer to the destination string.
*/
char *_memcpy(char *dest, const char *src, int len)
{
	int i = 0;

	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
* str_len - Calculate the lenght of a string
* @str: The string
*
* Return: The length of a string
*/
int str_len(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
