#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on exit
 */
int main(void)
{
	unsigned long int old_fibo = 1;
	unsigned  long int current_fibo = 2;
	unsigned  long int next_fibo;
	unsigned  long int sum = 2;
	unsigned  long int i = 2;

	while (i < 4000000)
	{
		next_fibo = old_fibo + current_fibo;
		old_fibo = current_fibo;
		current_fibo = next_fibo;
		if (next_fibo % 2 == 0)
			sum += next_fibo;
		if (sum > 4000000)
			break;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
