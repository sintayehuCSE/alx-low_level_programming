#include "main.h"
void check_out_each_word(char **words, char *str);
void insert_word(char **words, char *str, int start, int end, int index);
/**
 * strtow - convert/organize each element of string into words
 * @str: The string to be organized into words
 *
 * Return: Double char pointer to the 2D array that holds words in the string
 */

char **strtow(char *str)
{
	char **words;
	int i = 0;
	int flag_1st_char = 0;
	int len = 0;

	if (str == NULL || *(str) == '\0' || (str[1] == '\0' && *(str) == 32))
	{
		return (NULL);
	}
	else
	{
		for (; str[i]; i++)
		{
			if (flag_1st_char == 0 && *(str + i) != 32)
				flag_1st_char = 1;
			if (i > 0 && *(str + i) == 32 && *(str + i - 1) != 32)
			{
				flag_1st_char = 0;
				len++;
			}
		}
		len = len + flag_1st_char;
		if (len == 0)
			return (NULL);
		words = (char **)malloc(sizeof(char *) * (len + 1));
		if (words == NULL)
		{
			return (NULL);
		}
		else
		{
			check_out_each_word(words, str);
			words[len] = NULL;
		}
	}
	return (words);
}
/**
 * check_out_each_word - find each word in string and instruct to add them
 * in to 2D array
 * @words: The 2D array that holds word of a passed string
 * @str: The passed in string
 */

void check_out_each_word(char **words, char *str)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	int start;
	int end;

	for (; *(str + i); i++)
	{
		if (flag == 0 && *(str + i) != 32)
		{
			start = i;
			flag = 1;
		}
		if (i > 0 && str[i] == 32 && *(str + i - 1) != 32)
		{
			flag = 0;
			end = i;
			insert_word(words, str, start, end, j);
			j++;
		}
	}
	if (flag == 1)
	{
		end = i;
		insert_word(words, str, start, end, j);
	}
}

/**
 * insert_word - insert word into each several 1D array of 2D array as
 * instructed by @check_out_each_word function.
 * @words: The pointer to 2D array that holds words of a passed in string
 * @str: pointer to the passed in string
 * @start: starting index of each word in the strring
 * @end: The last index of each word in string
 * @index: The height of 2D array
 *
 * Return: Nothing
 */

void insert_word(char **words, char *str, int start, int end, int index)
{
	int i = 0;
	int word_len = end - start;

	words[index] = malloc(sizeof(char) * (word_len + 1));
	if (words[index] == NULL)
		return;
	for (; i < word_len; i++)
	{
		words[index][i] = *(str + start);
		start++;
	}
	words[index][i] = '\0';
}
