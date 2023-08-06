#include "main.h"
/**
 * _strpbrk - locates the first occurrence of accept in the string s
 * @s: string to be searched
 * @accept: The substring to be accepted
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
