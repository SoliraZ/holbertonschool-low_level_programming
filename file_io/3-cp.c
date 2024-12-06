#include "main.h"

/**
 * print_error - choose the right error to print and print it.
 * @error: Error number.
 */

void	print_error(int error)
{
	if (error == 97)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (error == 98)
	{
		write(2, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}
	if (error == 99)
	{
		write(2, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
		exit(99);
	}
	if (error == 100)
	{
		write(2, "Error: Can't close fd FD_VALUE\n", 31);
		exit(100);
	}
}

/**
 * create_buffer - Create a buffer.
 *
 * Return: the buffer.
 */

char	*create_buffer(void)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		print_error(99);
	}
	return (buffer);
}

/**
 * main - copy the content of a file to another file.
 * @argc: arguments count.
 * @argv: arguments.
 *
 * Return: 0 on success, 97 on failure
 */

int	main(int argc, char *argv[])
{
	int	fd_copy, fd_paste, n_write, n_read, fclose;
	char	*buffer;

	if (argc != 3)
	{
		print_error(97);
	}
	buffer = create_buffer();
	fd_copy = open(argv[1], O_RDONLY);
	n_read = read(fd_copy, buffer, 1024);
	fd_paste = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (n_read != -1)
	{
		if (fd_copy == -1 || n_read == -1)
		{
			print_error(98);
			free(buffer);
		}
		n_write = write(fd_paste, buffer, n_read);
		if (n_write == -1 || fd_paste == -1)
		{
			print_error(99);
			free(buffer);
		}
		n_read = read(fd_copy, buffer, 1024);
		fd_paste = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	fclose = close(fd_copy);
	if (fclose == -1)
		print_error(100);
	fclose = close(fd_paste);
	if (fclose == -1)
		print_error(100);
	return (0);
}
