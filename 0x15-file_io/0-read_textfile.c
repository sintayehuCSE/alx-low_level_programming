#include "main.h"
/**
 * read_textfile - Reads and prints a text file
 * @filename: Pointer to file that holds the text
 * @letters: Number of byte to read and print
 *
 * Return: The actual byte read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_count;
	ssize_t print_count;
	size_t i = 0;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
		return (0);
	while (buffer[i])
		i++;
	buffer[i] = '\0';
	print_count = write(STDOUT_FILENO, buffer, i);
	if (print_count == -1)
		return (0);
	close(fd);
	free(buffer);
	return (print_count);
}
