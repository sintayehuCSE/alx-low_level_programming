#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count number of argument passed to language job controller
 * @argv: An array of pointer that holds argumets to a program
 *
 * Return: 0 if argument is 2. 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
