#include "main.h"
/**
 * string_toupper - change all lower case character of string to uppercase
 * @str: string to be capitalized
 *
 * Return: pointer to capitalized integer
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if ((*(str + i) >= 97) && (*(s + i) <= 122))
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
