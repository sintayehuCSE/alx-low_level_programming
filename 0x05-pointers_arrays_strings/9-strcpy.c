#include "main.h"
/**
 * _strcpy - copy source string into destination string
 * @src: pointer to source string
 * @dest: pointer to desstination string
 *
 * Return: Pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (result);
}
