#include "main.h"
int _strlen(char *);
/**
 * create_file - Create a file with the specified text content only
 * @filename: Name of the file to be created
 * @text_content: Content of the file to be created
 *
 * Return: 1 on success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int len;
	int fd;

	if (!filename)
		return (-1);
	len = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	len = write(fd, text_content, len);
	if (len == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - Determine the length of string to write to the file
 * @text_content: Pointer to the string to be content of the file
 *
 * Return: Size of text_content
 */
int _strlen(char *text_content)
{
	int len = 0;

	while (text_content && text_content[len])
	{
		len++;
	}
	return (len);
}
