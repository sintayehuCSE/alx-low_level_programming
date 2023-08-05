#include "main.h"
/**
 * check - determine if number is prime by dividing it for all number below it.
 * @a: a factor of the number
 * @n: number to be checked for being prime
 *
 * Return: 1 if prime. -1 otherwise
 */

int check(int a, int n)
{
	if (a == n)
		return (1);
	else if (n % a == 0)
		return (0);
	return (check(a + 1, n));
}
/**
 * is_prime_number - check if a number is prime
 * @n: Number to be checked for being prime
 *
 * Return: 1 if prime number. 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(2, n));
}
