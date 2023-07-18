#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on exit
 */
int main(void)
{
	int old_fibo = 1;
	int current_fibo = 2;
	int next_fibo;
	int temp;
	int i = 0;

	printf("%d, ", old_fibo);
	printf("%d, ", current_fibo);
	while (i < 48)
	{
		next_fibo = old_fibo + current_fibo;
		old_fibo = current_fibo;
		current_fibo = next_fibo;
		printf("%d", next_fibo);
		if (i != 47)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
