#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: sting whose second half is to be printed
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (*str)
	{
		len++;
		str++;
	}
	if (len % 2 != 0)
	{
		str = str - (((len - 1) / 2) + 1);
		while (i <= ((len - 1) / 2))
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	else
	{
		str = str - (len / 2);
		while (i < (len / 2))
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	_putchar(10);
}
