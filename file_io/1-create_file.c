#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a file from text
 * @filename: name of file to create
 * @text_content: content for file
 *
 * Return: 1 for success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	int i;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	i = 0;
	while (text_content[i] != 0)
	{
		written = write(fd, &text_content[i], 1);
		if (written == -1)
		{
			return (-1);
		}
		i = i + 1;
	}
	close(fd);
	return (1);
}
