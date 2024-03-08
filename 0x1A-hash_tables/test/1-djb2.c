#include "hash_tables.h"
/**
 * hash_djb2 - Generate a HASH_CODE from a string key
 * @str: The key for generating a HASH_CODE
 *
 * Return: The HASH_CODE
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /** hash * 33 + c */
	}
	return (hash);
}
