#include "main.h"
/**
 * _atoi - convert string in to an integer
 * @s: string to be converted
 *
 * Return: 0 if no integer in string. found integer otherwise
 */

int _atoi(char *s)
{
	int result = 0;
	int check = 1;

	while (*s)
	{
		if ((*s >= 48) && (*s <= 57))
		{
			if (*(s - 1) == 45)
				check *= -1;
			result = (result + (*s)) * 10;
			if ((*(s + 1) == 32) || (*(s + 1) == 0))
			{
				if (check == -1)
					return (-1 * (result / 10));
				else
					return (result / 10);
			}
		}
		s++;
	}
	return (result);
}
