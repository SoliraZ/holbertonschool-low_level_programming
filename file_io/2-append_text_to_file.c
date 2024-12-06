#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file to append text to
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int	fd, n_write, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i])
		i++;
	n_write = write(fd, text_content, i);
	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
