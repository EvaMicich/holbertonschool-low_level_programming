#include "main.h"

/**
 * xread - reads the fd and handles error
 *
 * @fd: file descriptor
 * @buf: buffer
 * @count: bytes to read
 * @name_of_file: file to read from
 * Return: number of bytes read, or 98 for error
 */
ssize_t xread(int fd, char *buff, size_t count, char* name_of_file)
{
	ssize_t bytes_read;

	bytes_read = read(fd, buff, count);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s",
			name_of_file);
		exit(98);
	}
	return (bytes_read);
}

/**
* main - copies file to another file
* @file_from: file to copy from
* @fileto: file to copy to
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int fd_from;
	char buff[1024];
	int num_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s",
			argv[1]);
		exit(98);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s",
			argv[1]);
		exit(98);
	}
	num_bytes = xread(fd_from, buff, 1024, argv[1]);
	while (num_bytes != 0)
	{
		write(STDOUT_FILENO, buff, num_bytes);
		num_bytes = xread(fd_from, buff, 1024, argv[1]);
	}
	close(fd_from);
	return (0);
}
