#include "main.h"
int iscapital(char *);
int ischar(char *);
/**
 * cap_string - capitalize each word of a string
 * @str: string whose word is to be capitalized
 *
 * Return: char pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char term[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int check_if_char;
	int check_capital;

	while (*(str + i))
	{
		check_if_char = ischar((str + i));
		if (check_if_char == 1)
		{
			check_capital = iscapital((str + i));
			if (check_capital == 0)
			{
				if (i == 0)
					*(str) -= 32;
				for (; term[j]; j++)
				{
					if (*(str + i - 1) == term[j])
					{
						*(str + i) -= 32;
						break;
					}
				}
				j = 0;
			}
			if (*(str + i - 1) == 9)
				*(str + i - 1) = 32;
		}
		i++;
	}
	return (str);
}
/**
 * ischar - check if a character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if alphabet. 0 otherwise
 */
int ischar(char *c)
{
	if ((*c >= 97 && *c <= 122) || (*c >= 65 && *c <= 90))
		return (1);
	return (0);
}
/**
 * iscapital - check if character is capital letter
 * @c: character to be checked
 *
 * Return: 1 if true. 0 otherwise
 */

int iscapital(char *c)
{
	if ((*c <= 90) && (*c >= 65))
		return (1);
	return (0);
}
