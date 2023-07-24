#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: sting whose second half is to be printed
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	char *half;

	while (*str)
	{
		len++;
	}
	half = str + len;
	if (len % 2 != 0)
	{
		while (i <= ((len - 1) / 2))
		{
			_putchar(*half);
			half--;
			i++;
		}
	}
	else
	{
		while (i < (len / 2))
		{
			_putchar(*half);
			half--;
			i++;
		}
	}
	_putchar(10);
}
