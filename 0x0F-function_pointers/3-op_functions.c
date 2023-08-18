#include "stdio.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add -  perform mathematical addition operation
 * @a: First integer to add
 * @b: Second argument to add
 *
 * Return: The result of addition operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Perform mathematical substraction operation
 * @a: First integer to substract from
 * @b: Second integer to use as substractor
 *
 * Return: Result of mathematial substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Perform mathematical multiplication operation
 * @a: 1st argument for multiplication
 * @b: 2nd argument for multiplication
 *
 * Return: Result of multiplication operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Perform mathematical division operation
 * @a: The numerator
 * @b: The denominator
 *
 * Return: Result of division opearation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Perform mathematical modulo operation
 * @a: The numerator
 * @b: The denominator
 *
 * Return: Result of modulo operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
