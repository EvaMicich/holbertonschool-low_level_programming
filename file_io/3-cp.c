#include"main.h"

/**
 * main - copies a file
 * @argc: count of args
 * @argv: arr of args
 * Return: count of chars printed
*/
int main(int argc, char *argv[])
{
	int fd_in;
	int fd_out;
	int read_out;
	int write_out;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_out = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd_out < 0)
	{
		fd_out = open(argv[2], O_TRUNC | O_WRONLY);
	}
	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	read_out = read(fd_in, buff, 1024);
	while (read_out != 0)
	{
		write_out = write(fd_out, buff, read_out);
		if (write_out == -1)
		{
			exit(99);
		}
		read_out = read(fd_in, buff, 1024);
	}
	if (close(fd_in) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE"), exit(100);
	}
	if (close(fd_out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE"), exit(100);
	}
	return (0);
}
