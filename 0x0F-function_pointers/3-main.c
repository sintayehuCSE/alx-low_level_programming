#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"

/**
 * main - Performs one of the mathematical operation per user choice
 * @argc: The number of arguments passed to cmd line interpretor
 * @a: An array that will hold arguments passed to cmd line interpretor
 *
 * Return: 0 on success
 */

int main(int argc, char *a[])
{
	int i = 0;
	op_t result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (a[2][0] != '/' && a[2][0] != '*' && a[2][0] != '+' && a[2][0] != '-' &&  a[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(a[3]) == 0) && (a[2][0] == '/' || a[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result.f = get_op_func(a[2]);
	printf("%d\n", result.f(atoi(a[1]), atoi(a[3])));
	return (0);
}
