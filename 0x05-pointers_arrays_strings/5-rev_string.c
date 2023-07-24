#include "main.h"
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

	while (*far_right)
	{
		far_right++;
		len += 1;
	}
	far_right--;
	for (int i = 0; i < (len / 2); i++)
	{
		temp = *far_left;
		*far_left = *far_right;
		*far_right = temp;
		far_left++;
		far_right--;
	}
}
