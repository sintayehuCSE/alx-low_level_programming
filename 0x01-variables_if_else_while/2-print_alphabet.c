#include <stdio.h>

/**
 * main - prints lower case alphabet
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
