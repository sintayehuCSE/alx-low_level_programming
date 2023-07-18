#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on exit
 */
int main(void)
{
	long int old_fibo = 1;
	long int current_fibo = 2;
	long int next_fibo;
	int i = 0;

	printf("%ld, ", old_fibo);
	printf("%ld, ", current_fibo);
	while (i < 48)
	{
		next_fibo = old_fibo + current_fibo;
		old_fibo = current_fibo;
		current_fibo = next_fibo;
		printf("%ld", next_fibo);
		if (i != 47)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
