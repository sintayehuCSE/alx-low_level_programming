#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cents;
	int count = 0;
	int i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		while (cents != 0)
		{
			for (i = 0; i <= 4; i++)
			{
				if (cents >= coins[i])
				{
					count += cents / coins[i];
					cents = cents % coins[i];
				}
			}
		}
	}
	else
	{
		printf("0\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
