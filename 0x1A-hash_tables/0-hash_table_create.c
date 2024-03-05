#include "hash_table.h"
/**
* hash_table_create - Creates a HashTable
* @size: The CAPACITY of the HashTable
*
* Return: The pointer to the newly created HashTable or Null on error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable = NULL;
	int i = 0;

	HashTable = malloc(sizeof(hash_table_t) * size);
	if (!HashTable)
		return (HashTable);
	for (; i < size; i++)
		HashTable->array = NULL;
	return (HashTable);
}
