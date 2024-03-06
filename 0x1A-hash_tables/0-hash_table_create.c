#include "hash_tables.h"
/**
* hash_table_create - Creates a HashTable
* @size: The CAPACITY of the HashTable
*
* Return: The pointer to the newly created HashTable or Null on error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	long unsigned int i = 0;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (hashTable);
	hashTable->size = size;
	hashTable->array = calloc(hashTable->size, sizeof(hash_node_t));
	for (; i < hashTable->size; i++)
		hashTable->array[i] = NULL;
	return (hashTable);
}
