#include <stdio.h>
/**
 * main - print single digit number using putchar
 * Return: 0 on exit
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
}
