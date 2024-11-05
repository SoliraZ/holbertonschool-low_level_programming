#include "main.h"

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 if all work, 1 if there is an error
 */

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 1)
		return (1);
	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
