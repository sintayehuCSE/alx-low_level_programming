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
	char *concat_arg;
        int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	concat_arg = malloc(ac * sizeof(char) + 1);
	if (concat_arg != NULL)
	{
		while (i < 2 * ac)
		{
			concat_arg[i] = (char *)av[i];
			i++;
			concat_arg[i] = '\n';
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (concat_arg);
}
