#include <stdio.h>
/**
 * main - print possible combination of single digit number
 * Return: 0 on exit
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (48 + i);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
