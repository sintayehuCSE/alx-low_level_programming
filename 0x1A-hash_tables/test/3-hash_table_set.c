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

	if (!ht || !key)
		return (0);
	hash_code = key_index((const unsigned char *)key, ht->size);
	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);
	new_item->key = _strdup(key);
	new_item->value = _strdup(value);
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
