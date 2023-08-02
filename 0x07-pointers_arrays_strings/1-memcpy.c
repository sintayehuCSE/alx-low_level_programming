#include "main.h"
/**
 * _memcpy - copies specified memory byte to destination string
 * @dest: destination string to recieve copied byte
 * @src: Source string to provide byte for coping
 * @n: Number of bytes to be copied
 *
 * Return: Char pointer to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
