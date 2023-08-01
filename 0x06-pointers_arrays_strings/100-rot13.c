#include "main.h"
/**
 * rot13 - replace every alphabet by its 13th alphabet in a give string
 * @str: string whose rot13 algorithm is to be applied to
 *
 * Return: char pointer to rot13 encripted string
 */

char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	for (; *(str + i); i++)
	{
		for (; *(input + j); j++)
		{
			if (*(str + i) == *(input + j))
			{
				*(str + i) = *(output + j);
				break;
			}
		}
		j = 0;
	}
	return (str);
}
