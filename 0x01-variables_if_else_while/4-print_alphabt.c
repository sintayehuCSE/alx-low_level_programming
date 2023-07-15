#include <stdio.h>

/**
 * main - print lower case letter except for q and e
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
