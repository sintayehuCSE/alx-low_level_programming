#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100 but
 * replaces multiple of both 3 and 5
 * with FizzBuzz, only multiple of 3 with Fizz,
 * and only multiple of 5 with Buzz
 * Return: 0 on exit
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
