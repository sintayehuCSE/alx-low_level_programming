#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(, );
			n++;
		}
	}
	printf("\n");
}
