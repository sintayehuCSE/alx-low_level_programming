#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs one of the mathematical operation per user choice
 * @argc: The number of arguments passed to cmd line interpretor
 * @a: An array that will hold arguments passed to cmd line interpretor
 *
 * Return: 0 on success. exit() argument otherwise
 */

int main(int argc, char *a[])
{
	op_t result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result.f = get_op_func(a[2]);
	if (!result.f)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result.f(atoi(a[1]), atoi(a[3])));
	return (0);
}
