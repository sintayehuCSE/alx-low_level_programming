#include  "main.h"
unsigned int find_lens1(char *s1);
unsigned int find_lens2(char *s2);
/**
 * str_concat - a function that concatenates two string
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenation result
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	unsigned int i = 0, j = 0;
	char *concat;

	len1 = find_lens1(s1);
	len2 = find_lens2(s2);
	concat = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)));
	if (concat)
	{
		if (len1 == 0)
		{
			while (*(s2 + i))
			{
				*(concat + i) = *(s2 + i);
				i++;
			}
		}
		else if (len2 == 0)
		{
			while (*(s1 + i))
			{
				*(concat + i) = *(s1 + i);
				i++;
			}
		}
		else
		{
			while (*(s1 + i))
			{
				*(concat + i) = *(s1 + i);
				i++;
			}
			while (*(s2 + j))
			{
				*(concat + i) = *(s2 + j);
				i++;
				j++;
			}
		}
		*(concat + i) = '\0';
	}
	else
	{
		return (NULL);
	}
	return (concat);
}
/**
 * find_lens1 - find lenght of first string
 * @s1: the first string
 *
 * Return: length of s1
 */

unsigned int find_lens1(char *s1)
{
	unsigned int i = 0;
	unsigned int len1 = 0;

	while (*(s1 + i))
	{
		len1 += 1;
		i++;
	}
	return (len1);
}
/**
 * find_lens2 - find length of second string
 * @s2: the second string
 *
 * Return: length of s2
 */

unsigned int find_lens2(char *s2)
{
	unsigned int i = 0;
	unsigned int len2 = 0;

	while (*(s2 + i))
	{
		len2 += 1;
		i++;
	}
	return (len2);
}
