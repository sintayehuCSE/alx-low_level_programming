#include <stdio.h>
/**
 * main - prints a program name
 * @argc: count the number of argument passed to program
 * @argv:  an array of pointers that hold arguments to program
 *
 * Return: 0 on exit_success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
