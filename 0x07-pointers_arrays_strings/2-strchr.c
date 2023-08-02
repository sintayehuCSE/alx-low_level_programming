#include "main.h"
/**
 * _strchr - locates the first occurence of character in a string
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: Char pointer to the first occurence of @c. NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
