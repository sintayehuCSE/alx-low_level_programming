#include "main.h"
/**
 * more_numbers - prints number from 0 to through 14 ten times
 */


void more_numbers(void)
{
	int i = 0;
	int digit = 0;

	for (; i < 10; i++)
	{
		for (; digit <= 14; digit++)
		{
			if (digit >= 10)
				_putchar(digit / 10 + '0');
			_putchar(digit % 10 + '0');
		}
		digit = 0;
		_putchar(10);
	}
}
