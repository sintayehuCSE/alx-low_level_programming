#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on exit
 */
int main(void)
{
	long long int old_fibo = 1;
	long long int current_fibo = 2;
	long long int next_fibo;
	long long int sum = 2;
	long long int i = 2;

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
	printf("%lld\n", sum);
	return (0);
}
