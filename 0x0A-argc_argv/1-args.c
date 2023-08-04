#include "main.h"
/**
 * main - prints the number of arguments passed to a program
 * @argc: count the number of arguments passed to command line interpretor
 * @argv: an array pointer to passed arguments
 *
 * Return: 0 on exit_success. or non-zero on exit_failure
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		_putchar((char)argc - '1');
	_putchar(10);
	return (0);
}
