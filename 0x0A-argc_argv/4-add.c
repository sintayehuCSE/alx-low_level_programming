#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	char *ptr;
	long int digit;
	long int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		digit = strtol(argv[i], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += digit;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
