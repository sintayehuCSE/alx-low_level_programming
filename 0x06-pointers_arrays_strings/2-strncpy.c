#include "main.h"
/**
 * _strncpy - Copy src string in to dest string up to specified byte
 * @src: The src string to be copied
 * @dest: Destination string to recieve copy of src string
 * @n: Bytes of src to be copied
 *
 * Return: Pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while ((i < n) && (*(src + i) != 0))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (result);
}
