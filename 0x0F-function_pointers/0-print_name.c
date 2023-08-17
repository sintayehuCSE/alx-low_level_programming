#include "function_pointers.h"
/**
 * print_name - A function that print string name passed to it
 * @name: A pointer to the name to be printed
 * @f: A pointer to function that does the printing job
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		f(name);
	}
	exit(98);
}
