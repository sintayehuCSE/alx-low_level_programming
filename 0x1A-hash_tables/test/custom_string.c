#include "hash_tables.h"
/**
* _strdup - Duplicates a string to new memory area
* @str: The string to be duplicated.
*
* Return: Pointer to the duplicated string
*/
char *_strdup(const char *str)
{
	char *dup = NULL;
	int len = 0;

	len = str_len(str);
	dup = malloc(sizeof(char) * len + 1);
	return (_memcpy(dup, str, len));
}
/**
* _memcpy - Copy a source memory content to destination.
* @src: The source string
* @dest: A destination for a source string
* @len: The length of source string
*
* Return: Pointer to the destination string.
*/
void *_memcpy(char *dest, const char *src, int len)
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
