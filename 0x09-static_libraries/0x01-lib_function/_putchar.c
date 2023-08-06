#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character to std output
 * @c: character to be printed
 *
 * Return: An ascii value of a character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
