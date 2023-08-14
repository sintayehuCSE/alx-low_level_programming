#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a file name from which it was compiled
 * Return: 0 on exit
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
