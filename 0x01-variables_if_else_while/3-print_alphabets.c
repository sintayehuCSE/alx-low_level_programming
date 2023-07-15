#include <stdio.h>

/**
 * main - print lower and upper case letter
 * Return: 0 on exit
 */

int main(void)
{
	char c;
	int i;

	c = 'a';
	for (i = 0; i < 51; i++)
	{
		putchar(c);
		c++;
		if (c == 'z')
		{
			putchar(c);
			c = 'A';
		}

	}
	putchar('\n');
	return (0);
}
