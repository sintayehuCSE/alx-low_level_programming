#include "main.h"
int _strlen(char *);
/**
 * append_text_to_file - Add a new text to the end of a file
 * @filename: Pointer to the appendable file
 * @text_content: The text to be used for appending operation
 *
 * Return: 1 on success. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (!filename)
		return (-1);
	len = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
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
