#include "main.h"
size_t _argv1_len(char *);
size_t _argv2_len(char *);
void _copy(int from_fd, int to_fd, char *filename1, char *filename2);
void _close_open_file(int fd);
/**
 * main - Copy one file into the other
 * @argc: Count the number of arguments passed in to main()
 * @argv: Pointer that store the cmd line argument of main()
 *
 * Return: 0 on success. 97, 98, 99, 100 otherwise
 */
int main(int argc, char *argv[])
{
	int from_fd;
	int to_fd;
	size_t argv1_len;
	size_t argv2_len;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		argv1_len = _argv1_len(argv[1]);
		write(STDERR_FILENO, "Error: Can't read from file ", 28);
		write(STDERR_FILENO, argv[1], argv1_len);
		write(STDERR_FILENO, "\n", 1);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR
		     | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
	{
		argv2_len = _argv2_len(argv[2]);
		write(STDERR_FILENO, "Error: Can't write to ", 22);
		write(STDERR_FILENO, argv[2], argv2_len);
		write(STDERR_FILENO, "\n", 1);
		exit(99);
	}
	_copy(from_fd, to_fd, argv[1], argv[2]);
	return (1);
}
/**
 * _argv1_len - Determine the length of first filename
 * @filename: Pointer that holds name of the 1st file
 *
 * Return: Length of the file or 0(zero)
 */
size_t _argv1_len(char *filename)
{
	size_t len = 0;

	while (filename && filename[len])
		len++;
	return (len);
}
/**
 * _argv2_len - Determine the filename length of the second file
 * @filename: Pointer to the filename of the second file
 *
 * Return: Length of the file or zero
 */
size_t _argv2_len(char *filename)
{
	size_t len = 0;

	while (filename && filename[len])
		len++;
	return (len);
}
/**
 * _copy - Copy the first file into the second file
 * @from_fd: File descriptor of the first file
 * @to_fd: File descriptor of the second file
 * @filename1: Name of the first file
 * @filename2: Name of the second file
 *
 * Return: Nothing
 */
void _copy(int from_fd, int to_fd, char *filename1, char *filename2)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_count = -1;
	ssize_t write_count;

	while (read_count != 0)
	{
		read_count = read(from_fd, buffer, BUFFER_SIZE);
		if (read_count == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", filename1);
			exit(98);
		}
		write_count = write(to_fd, buffer, BUFFER_SIZE);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", filename2);
			exit(99);
		}
	}
	_close_open_file(from_fd);
	_close_open_file(to_fd);
}
/**
 * _close_open_file - Close the file descriptor of the open files
 * @fd: File descriptor of open file
 *
 * Return: Nothing
 */
void _close_open_file(int fd);
{
	int close_status;

	close_status = close(fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close", fd);
		exit(100);
	}
}
