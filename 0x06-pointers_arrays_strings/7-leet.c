#include "main.h"
/**
 * leet - encodes string in to 1337 ecoding technique
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	char alphabet = "aAeEoOtTlL";
	char digit = "4433007711";
	int i = 0;

	while (*str)
	{
		for (; i < sizeof(alphabet); i++)
			if (*(str + i) == *(alphabet + i))
				*(str + i) = *(digit + i);
		i = 0;
	}
	return (str);
}
