#include "variadic_functions.h"
/**
 * print_numbers - Prints all numbers passed to it ass argument
 * @separator: A separator of each argument
 * @n: The number of the passed in integer argument
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(ap);
	putchar(10);
}
