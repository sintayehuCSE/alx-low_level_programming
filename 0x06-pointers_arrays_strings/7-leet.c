#include "main.h"
/**
 * leet - encodes string in to 1337 ecoding technique
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	char alphabet[] = "aAeEoOtTlL";
	char digit[] = "4433007711";
	int i = 0;
	int j = 0;

	for (; *(str + j); j++)
	{
		for (; *(alphabet + i); i++)
		{
			if (*(str + j) == *(alphabet + i))
			{
				*(str + j) = *(digit + i);
				break;
			}
		}
		i = 0;
	}
	return (str);
}
