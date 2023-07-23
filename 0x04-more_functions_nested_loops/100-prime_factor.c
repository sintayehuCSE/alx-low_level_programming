#include <stdio.h>
long int largest_prime_factor(long int);
int check_prime(long int)
/**
 * main - prints the largest prime factor of specified no.
 * Return: 0 on exit
 */

int main(void);
{
	long int num = 612852475143;
	long int largest = largest_prime_factor(num);

	printf("%ld\n", largest);
	return (0);
}

/**
 * largest_prime_factor - finds the largest prime number
 * @n: number whose largest prime factor is to be determined
 * Return: largest prime number
 */
long int largest_prime_factor(long int n)
{
	long int i = 2;
	long int old = 2;
	long int current;
	long int largest;
	int result;

	for (; i <= n;)
	{
		result = check_prime(i);
		if ((result == 1) && (n % i == 0))
		{
			current = i;
			if (current >= old)
			{
				largest = current;
			}
			old = current;
			n = n / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	return (largest);
}
/**
 * check_prime - check if a number is prime
 * @n: number to check
 * Return: 1 if true. 0 otherwise
 */

int check_prime(long int n)
{
	int a = 2;

	for (; a < n; a++)
	{
		if (n % a == 0)
			return (0);
	}
	return (1);
}
