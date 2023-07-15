#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k, m;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		putchar(i + 48);
		putchar(j + 48);
		putchar(' ');
		for (k = i; k <= 9; k++)
		{
			for (m = j + 1; m <= 9; m++)
			{
				putchar(k + 48);
				putchar(m + 48);
				if ((i == 9) && (j == 8) && (k == 9) && (m == 9))
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
