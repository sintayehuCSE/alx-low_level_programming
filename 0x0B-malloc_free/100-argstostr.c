#include "main.h"
/**
 * argstostr - concatenates all the command line argument of a program
 * @ac: The number of command line argument
 * @av: Double pointer to the array that hold command line argument
 *
 * Return: Char pointer to concatenated argument
 */

char *argstostr(int ac, char **av)
{
	char *string, *concat;
	int i = 0, j = 0, k = 0, len = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < ac)
		{
			string = av[i];
			while (*(string + j))
				len++, j++;
			j = 0, i++;
		}
		i = 0, j = 0;
		concat = malloc(sizeof(char) * (len + 1) + ac);
		if (concat != NULL)
		{
			while (i < ac)
			{
				string = av[i];
				while (*(string + j))
				{
					if (k < len + ac)
						*(concat + k) = *(string + j), k++;
					j++;
				}
				*(concat + k) = '\n', j = 0, k++, i++;
			}
			*(concat + k) = '\0';
		}
		else
		{
			return (NULL);
		}
	}
	return (concat);
}
