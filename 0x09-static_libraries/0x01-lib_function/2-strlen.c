#include "main.h"
/**
 * _strlen - find a length of a string
 * @s: string whose length is to be determined
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s++;
	}
	return (len);
}
