#include <stdio.h>

/**
 * main - print lowercase letter in reverse order
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
