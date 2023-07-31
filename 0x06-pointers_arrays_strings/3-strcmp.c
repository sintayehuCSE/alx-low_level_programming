#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: rresult of comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	if ((*s1 == 0) && (*s2 == 0))
		return (0);
}
