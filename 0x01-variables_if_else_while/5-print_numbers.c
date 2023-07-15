#include <stdio.h>
/**
 * main - prints single digit number
 * Return: 0 on exit
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
