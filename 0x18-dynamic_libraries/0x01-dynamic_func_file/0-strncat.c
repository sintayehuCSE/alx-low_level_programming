#include "main.h"
/**
 * _strncat - concatenates n byte of string from src to dest string
 * @dest: concatenation reciever
 * @src: string to be used for concatenation
 * @n: specifn bytes to be used for concatenation from src string
 *
 * Return: char pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *result = dest;

	while (*dest != 0)
		dest++;
	for (; ((i < n) && (*src != 0)); i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (result);
}
