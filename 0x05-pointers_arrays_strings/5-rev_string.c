#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
/**
 * rev_string - reverse the value of a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char *far_left = s;
	char *far_right = s;
	char temp;
	int len = 0;
	int i = 0;

	while (*far_right)
	{
		far_right++;
		len += 1;
	}
	far_right--;
	for (; i < (len / 2); i++)
	{
		temp = *far_left;
		*far_left = *far_right;
		*far_right = temp;
		far_left++;
		far_right--;
	}
}
