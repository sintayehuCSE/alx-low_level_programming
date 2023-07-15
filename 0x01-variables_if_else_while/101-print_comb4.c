#include <stdio.h>
/**
 * main - print three possible combination of digits
 * Return: 0 on exit
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if ((i == 7) && (j == 8) && (k == 9))
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
