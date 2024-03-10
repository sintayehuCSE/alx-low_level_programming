#include "hash_tables.h"
/**
 * shash_table_create - Create a sorted HashTable
 * @size: The size of the sorted HashTable
 *
 * Return: Pointer to the created HashTable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shashTable;
	unsigned long int i = 0;

	shashTable = malloc(sizeof(shash_table_t));
	if (!shashTable)
		return (shashTable);
	shashTable->size = size;
	shashTable->array = calloc(shashTable->size, sizeof(shashTable->array));
	shashTable->shead = NULL;
	shashTable->stail = NULL;
	for (; i < shashTable->size; i++)
		shashTable->array[i] = NULL;
	return (shashTable);
}
/**
 * shash_table_set - Set and intialize the backet of sorted HashTable
 * @ht: Pointer to the sorted HashTable
 * @key: The key of the backet
 * @value: The value of the backet
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *backet, *head;
	unsigned long int hash_code;

	if (!ht || key == (const char *)"" || !key || !value)
		return (0);
	backet = malloc(sizeof(shash_node_t));
	if (!backet)
		return (0);
	hash_code = key_index((const unsigned char *)key, ht->size);
	head = ht->array[hash_code];
	while (head)
	{
		/**To update key to new value*/
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = str_dup(value);
			return (1);
		}
		head = head->next;
	}
	backet->key = str_dup(key);
	backet->value = str_dup(value);
	backet->next = NULL;
	backet->sprev = NULL;
	backet->snext = NULL;
	return (store_backet(ht, backet, hash_code));
}
/**
* store_backet - Store the backet in a list or empty slot
* @ht: Pointer to the HashTable
* @backet: The backet of data
* @hash_code: Location of the backet within HashTable
*
* Return: 1 on success. And never fails unless halted.
*/
int store_backet(shash_table_t *ht, shash_node_t *backet,
		 unsigned long int hash_code)
{
	shash_node_t *head;

	head = ht->array[hash_code];
	if (!head)
	{
		ht->array[hash_code] = backet;
		sort_backet(ht, backet);
	}
	else
	{
		backet->next = ht->array[hash_code];
		ht->array[hash_code] = backet;
		sort_backet(ht, backet);
	}
	return (1);
}
/**
* sort_backet - Insert the backet into a sorted list
* @ht: Pointer to the HashTable
* @backet: Pointer to the backet to be sorted
*
* Return: Nothing
*/
void sort_backet(shash_table_t *ht, shash_node_t *backet)
{
	shash_node_t *temp;

	if (!ht->shead)
	{
		/**...The first backet in sorted HashTable...*/
		ht->shead = backet;
		ht->stail = backet;
	}
	else
	{
		temp = ht->shead;
		if (!temp->snext)
		{
			/**Only one node/backet in sorted HashTable list*/
			if (strcmp(backet->key, temp->key) < 0)
			{
				backet->snext = temp;
				temp->sprev = backet;
				ht->shead = backet;
			}
			else
			{
				temp->snext = backet;
				backet->sprev = temp;
				ht->stail = backet;
			}
		}
		else
		{
			/**...More than one backet in the sorted list...*/
			sort_many_backet(ht, backet);
		}
	}
}
/**
 * sort_many_backet - Sort the HashTable with more than one sorted Node.
 * @ht: The HashTable.
 * @backet: The new node.
 *
 * Return: Nothing
 */
void sort_many_backet(shash_table_t *ht, shash_node_t *backet)
{
	shash_node_t *temp;

	temp = ht->shead;
	while (temp)
	{
		if (strcmp(backet->key, temp->key) < 0)
		{
			if (!temp->sprev)/**Add at beggining*/
			{
				backet->snext = temp;
				temp->sprev = backet;
				ht->shead = backet;
				break;
			}
			else if (temp->snext || !temp->snext)
			{
				/**Insert in between other backet*/
				backet->snext = temp;
				backet->sprev = temp->sprev;
				temp->sprev->snext = backet;
				temp->sprev = backet;
				break;
			}
		}
		temp = temp->snext;
	}
	/**Insert at the end*/
	if (!temp)
	{
		ht->stail->snext = backet;
		backet->sprev = ht->stail;
		ht->stail = backet;
	}
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
/**
* shash_table_get - Get the value of specific key
* @ht: The HashTable
* @key: Key of the table
*
* Return: The value or Null
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;
	unsigned long int hash_code;

	if (!ht || !key)
		return (NULL);
	hash_code = key_index((const unsigned char *)key, ht->size);
	head = ht->array[hash_code];
	if (head)
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
				return (head->value);
			head = head->next;
		}
	}
	return (NULL);
}
/**
* shash_table_print - Print the sorted HashTable
* @ht: Pointer to the sorted HashTable
*
* Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht)
	{
		temp = ht->shead;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->snext)
				printf(", ");
			temp = temp->snext;
		}
		printf("}\n");
	}
}
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht)
	{
		temp = ht->stail;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->sprev)
				printf(", ");
			temp = temp->sprev;
		}
		printf("}\n");
	}
}
/**
* shash_table_delete - Free's all memory allocated to sorted HashTable
* @ht: Pointer to the sorted HashTable
*
* Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht)
	{
		temp = ht->shead;
		while (temp)
		{
			ht->shead = temp->snext;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = ht->shead;

		}
		free(ht->array);
		free(ht);
	}
}