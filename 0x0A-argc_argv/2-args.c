#include <stdio.h>
/**
 * main - prints all program arguments it recieves
 * @argc: count the number of arguments passed to a program call
 * @argv: An array pointer that hold arguments passed to a program
 *
 * Return: 0 on exit_success. or non-zero value on exit_failure
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
