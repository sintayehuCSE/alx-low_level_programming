#include <stdio.h>
#include <stdlib.h>
void print_out(char *mul_result, int len);
int find_len2(char **argv);
int find_len1(char **argv);
int check_digit(char **argv, int len1, int len2);
void initialize_mul_result(char *mul_result, int len);
char *mul(char c, char *argv_1, int a1_lasti, char *mul_result, int mul_index);
/**
 * main - Multiplies two positive integers and print the result
 * @argc: Count the number of command line argument passed to the main function
 * @argv: An array of char  pointer to store The passed in cmd line argument
 *
 * Return: 0 on success or 98 on failure
 */

int main(int argc, char **argv)
{
	int len1;
	int len2;
	int len;
	char *mul_result;
	char *mult;
	int a2_indx;
	int i;

	len1 = find_len1(argv);
	len2 = find_len2(argv);
	if (argc != 3 || check_digit(argv, len1, len2))
	{
		printf("Error\n");
		exit(98);
	}
	mul_result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (mul_result == NULL)
	{
		printf("Failed to allocate the requested space\n");
		exit(98);
	}
	initialize_mul_result(mul_result, len1 + len2);
	len = len1 + len2;
	for (a2_indx = len2 - 1, i = 0; a2_indx >= 0; a2_indx--, i++)
	{
		mult = mul(argv[2][a2_indx], argv[1], len1 - 1, mul_result, (len - 2) - i);
		if (mult == NULL)
		{
			printf("Error\n");
			free(mul_result);
			exit(98);
		}
	}
	print_out(mul_result, len);
	return (0);
}
/**
 * mul - multiplies each elemnt of first argument wwith the second argument and
 * store the result
 * @c: The last digit of second argument
 * @argv_1: Pointer tot the first argument
 * @a1_lasti: Argument one last index which point to its last element
 * @mul_result: A pointer to the memory heap where result of multiplication is
 * stored
 * @mul_index: The last byte of memory area pointed to by @mul_result
 *
 * Return: A char pointer to the heap area that store result of multiplication
 */
char *mul(char c, char *argv_1, int a1_lasti, char *mul_result, int mul_index)
{
	int i;
	int j;
	int mul;
	int mulrem = 0;
	int add;
	int addrem = 0;

	for (i = a1_lasti, j = mul_index; i >= 0; i--, j--)
	{
		mul = (c - '0') * (argv_1[i] - '0') + mulrem;
		mulrem = mul / 10;
		add = (mul_result[j] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		mul_result[j] = add % 10 + '0';
	}
	for (addrem += mulrem; j >= 0 && addrem; j--)
	{
		add = (mul_result[j] - '0') + addrem;
		addrem = add / 10;
		mul_result[j] = add % 10 + '0';
	}
	if (addrem)
		return (NULL);
	return (mul_result);
}
/**
 * initialize_mul_result - initialize the heap area for storing the result of
 * multiplication to char '0'
 * @mul_result: A pointer to the heap area that will store result of multiplica
 * @len: length in byte of this heap area
 */
void initialize_mul_result(char *mul_result, int len)
{
	int i = 0;

	for (; i < len;)
	{
		mul_result[i] = '0';
		i++;
	}
	mul_result[i] = '\0';
}
/**
 * check_digit - check if each character passed in as argument are digit or not
 * @argv: A vector or 2D array that will store cmd line argument
 * @len1: lenght of the first argument
 * @len2: Length of the second argument
 *
 * Return: 1 if not digit. 0 otherwise.
 */
int check_digit(char **argv, int len1, int len2)
{
	int i = 1;
	int j;
	int len = len1;

	for (; i <= 2; i++)
	{
		for (j = 0; j < len; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
		len = len2;
	}
	return (0);
}
/**
 * find_len1 - find length of first argument
 * @argv: Vector that store cmd line argument
 *
 * Return: Length of 1st argument
 */
int find_len1(char **argv)
{
	int i = 0;
	int len1 = 0;

	for (; argv[1][i]; i++)
	{
		len1 += 1;
	}
	return (len1);
}
/**
 * find_len2 - find length of second argument
 * @argv: Vector that hold cmd line argument
 *
 * Return: Length of second argument
 */
int find_len2(char **argv)
{
	int i = 0;
	int len2 = 0;

	for (; argv[2][i]; i++)
	{
		len2 += 1;
	}
	return (len2);
}
/**
 * print_out - Display result of multiplication on std output
 * @mul_result: Pointer to heap area that holds result of multiplication
 * @len: Lenght in byte of the heap area that will store a result of multiplica
 */
void print_out(char *mul_result, int len)
{
	int i = 0;
	int j = 0;

	while (i < len)
	{
		if (mul_result[i] != '0')
			j = 1;
		if (j || i == len - 1)
			printf("%d", mul_result[i]);
		i++;
	}
	printf("\n");
	free(mul_result);
}
