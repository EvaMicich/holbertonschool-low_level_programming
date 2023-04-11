#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 *
 * @filename:file to print
 * @letters: number of letters to print
 * Return: fail 0, success, number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	ssize_t written;
	int fd;
	char *buff;

	buff = malloc(sizeof(buff)*letters);
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd  == -1)
	{
		return (0);
	}
	count = read(fd, buff, letters);
	if (count == -1)
	{
		return (0);
	}
	written = write(STDOUT_FILENO, buff, count);
	if (written == -1)
	{
		return (0);
	}
	close (fd);
	return (count);
	free (buff);
}
