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
	char buffer[letters];
	int byte_count = -1;
	int print_count = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	while (byte_count != 0)
	{
		byte_count = read(fd, buffer, letters);
		if (byte_count == -1)
			return (0);
		buffer[byte_count];
	}
	print_count = write (STDOUT_FILENO, buffer, letters);
	if (print_count != byte_count)
		return (0);
	return (print_count);
}
