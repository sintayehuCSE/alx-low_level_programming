#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string to be searched for the occurence of the substring
 * @accept: Substring to search for
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *initial = accept;

	while (*s != 32)
	{
		while (*accept)
		{
			if (*s == *accept)
				count++;
			accept++;
		}
		s++;
		accept = initial;
	}
	return (count);
}
