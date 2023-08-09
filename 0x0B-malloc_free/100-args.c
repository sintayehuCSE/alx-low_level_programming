#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av);
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

char *argstostr(int ac, char **av)
{
	char *string;
	char *concat;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;

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
			{
				len++;
				j++;
			}
			j = 0;
			i++;
		}
		i = 0;
		j = 0;
		concat = malloc(sizeof(char) * (len + 1) + ac);
		if (concat != NULL)
		{
			while (i < ac)
			{
				string = av[i];
				while (*(string + j))
				{
					if (k < len + ac)
					{
						*(concat + k) = *(string + j);
						k++;
					}
					j++;
				}
				j = 0;
				*(concat + k) = '\n';
				k++;
				i++;
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
