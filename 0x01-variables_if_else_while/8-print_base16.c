#include <stdio.h>
/**
 * main - print all base digit of hexadecimal
 * Return: 0 on exit
 */

int main(void)
{
	char c;
	int i;

	c = '0';
	for (i = 0; i <= 15; i++)
	{
		putchar(c);
		c++;
		if (c == 58)
			c = c + 39;
	}
	putchar('\n');
	return (0);
}
