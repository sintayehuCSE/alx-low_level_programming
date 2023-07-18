#include <stdio.h>
/**
 * main - find sum of multi of 3 0r 5 below 1024
 * Return: 0 on exit
 */

int main(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
