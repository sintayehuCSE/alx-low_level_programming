#include "main.h"
/**
 * _strlen_recursion - determines length of a string
 * @s: pointer to the string whose length is to be found
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
