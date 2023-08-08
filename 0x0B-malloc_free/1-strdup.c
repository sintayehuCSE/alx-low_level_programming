#include "main.h"
/**
 * _strdup - a function that duplicate string
 * @str: string to duplicated
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *dup_string = NULL;
	int i = 0;
	int len = 0;

	while (*(str + i))
	{
		len++;
		i++;
	}
	len = len + 1;
	i = 0;
	if (str != NULL)
	{
		dup_string = malloc(len * sizeof(char));
		if (dup_string)
		{
			while (*(str + i))
			{
				*(dup_string + i) = *(str + i);
				i++;
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (dup_string);
}
