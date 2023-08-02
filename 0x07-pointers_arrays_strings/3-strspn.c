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

	while (*s && *accept)
	{
		if ((*s != 32) && (*s == *accept))
			count++;
		s++;
		accept++;
	}
	return (count);
}
