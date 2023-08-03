#include "main.h"
/**
 * _strstr - locates a substring within a string
 * @haystack: String to be used for locating a substring
 * @needle: String to be located
 *
 * Return: A pointer to the beginning of the located substring. NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i))
	{
		while (*(needle + j) && (*(haystack + i) == *(needle)))
		{
			if (*(haystack + i + j) == *(needle + j))
				j++;
			else
				break;
		}
		if (*(needle + j))
		{
			j = 0;
			i++;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
