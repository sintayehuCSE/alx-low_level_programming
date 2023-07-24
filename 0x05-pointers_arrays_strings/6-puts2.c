#include "main.h"
/**
 * puts2 - prints every other character of a string begining with the first one
 * @str: string to be traversed
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		if (*(str + 1) == 0)
			break;
		str += 2;
	}
	_putchar(10);
}
