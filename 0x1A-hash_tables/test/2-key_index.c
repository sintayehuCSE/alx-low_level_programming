#include "hash_tables.h"
/**
 * key_index - Calculate the index of slot/backet within the HashTable.
 * @str: The key value of the slot/backet.
 * @size: Capacity/number of slots/ of the HashTable.
 *
 * Return: The index/location of the slot.
 */
unsigned long int key_index(const unsigned char *str, unsigned long int size)
{
	return (hash_djb2(str) % size);
}
