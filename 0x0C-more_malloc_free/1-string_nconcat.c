#include "main.h"
unsigned int find_len1(char *s1);
unsigned int find_len2(char *s2);
/**
 * string_nconcat - concatenates n byte of 2nd string on 1st string
 * @s1: first string to recieve concatenatio
 * @s2: 2nd string to provide byte for concatenation
 * @n: Number of byte/char to be used from @s2 for concatenation
 *
 * Return: A pointer to newly allocated space that hold the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_byte_concat;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_s1;
	unsigned int len_s2;

	len_s1 = find_len1(s1);
	len_s2 = find_len2(s2);
	if (len_s2 > n)
	{
		len_s2 = n;
	}
	else
	{
		n_byte_concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (n_byte_concat == NULL)
			return (NULL);
		if (s1 != NULL)
		{
			for (; s1[i]; i++)
				n_byte_concat[i] = s1[i];
		}
		if (s2 != NULL)
		{
			for (; j < len_s2; j++)
			{
				n_byte_concat[i] = s2[j];
				i++;
			}
		}
		n_byte_concat[i] = '\0';
	}
	return (n_byte_concat);
}
/**
 * find_len1 - find length of the first string
 * @s1: The pointer to the first string
 *
 * Return: Length of the first string
 */
unsigned int find_len1(char *s1)
{
	int i = 0;
	unsigned int len = 0;

	if (s1 != NULL)
	{
		while (s1[i])
		{
			len++;
			i++;
		}
	}
	return (len);
}
/**
 * find_len2 - Find length of the second string
 * @s2: Pointer to the second string
 *
 * Return: Length of the second string
 */
unsigned int find_len2(char *s2)
{
	int i = 0;
	unsigned int len = 0;

	if (s2 != NULL)
	{
		for (; s2[i]; i++)
		{
			len++;
			i++;
		}
	}
	return (len);
}
