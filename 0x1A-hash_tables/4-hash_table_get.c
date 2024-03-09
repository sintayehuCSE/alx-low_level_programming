#include "hash_tables.h"
/**
* hash_table_get - Get the value of specific key
* @ht: The HashTable
* @key: Key of the table
*
* Return: The value or Null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code;
	hash_node_t *head;
	char *value;

	if (!ht)
		return (NULL);
	hash_code = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[hash_code] || hash_code > ht->size)
		return (NULL);
	if (!ht->array[hash_code]->next)
		return (value = ht->array[hash_code]->value);
	head = ht->array[hash_code];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (value = head->value);
		head = head->next;
	}
	return (NULL);
}
