#include "main.h"
/**
 * _strcat - a c program that concatenate an string to the end of other string
 * @src: the string to be concatenated on to the other
 * @dest: the string to recievee concatenation
 *
 * Return: poiter to the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != 0)
		dest++;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (result);
}
