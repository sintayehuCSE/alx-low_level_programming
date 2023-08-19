#include "variadic_functions.h"
/**
 * print_all - Print out all different type of variable argument passed to it
 * @format: Format of in which to print the string
 */
void print_all(const char * const format, ...)
{
	char *value;
	int i = 0, j = 0;
	char *fmt = "iscf";
	va_list ap;

	va_start(ap, format);
	while (*(format + i))
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			value = va_arg(ap, char *);
			if (value != NULL)
			{
				printf("%s", value);
				break;
			}
			printf("(nil)");
			break;
		}
		while (*(fmt + j))
		{
			if ((*(fmt + j) == *(format + i)) && *(format + i + 1) != '\0')
				printf(", ");
			j++;
		}
		j = 0, i++;
	}
	va_end(ap);
	putchar(10);
}
