#include <stdio.h>
/**
 * main - prints unique two digit possible combination of digits
 * Return: 0 on exit
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if ((j == 9) && (i == 8))
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
