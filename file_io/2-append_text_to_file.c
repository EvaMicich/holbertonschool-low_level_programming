#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - append text to end of file
 *
 * @filename: file to append
 * @text_content: test to be appended
 * Return: success 1, fail -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
