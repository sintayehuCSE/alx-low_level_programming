#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: String to filled with constant byte
 * @b: The constant byte to be used for filling
 * @n: The number of byte to filled with constant byte
 *
 * Return: Char pointer to the string filled with constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
