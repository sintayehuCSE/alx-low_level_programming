#include "variadic_functions.h"
/**
 * print_strings - Prints its string argument
 * @separator: Symbol for separating argumrnt string
 * @n: Number of string argument passed in
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *value;

	va_start(ap, n);
	for (; i < n; i++)
	{
		value = va_arg(ap, char *);
		if (value != NULL)
		{
			printf("%s", value);
		}
		else
			printf("(nil)");
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	putchar(10);
}
