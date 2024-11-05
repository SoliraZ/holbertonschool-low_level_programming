#include "main.h"

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 if all work, 1 if there is an error
 */

int     main(int argc, char *argv[])
{
	int     i;
	int	n;

	n = 0;
	if (argc < 1)
		return (1);
	while (n <= (argc - 1))
	{
		i = 0;
		while (argv[n][i])
		{
			_putchar(argv[n][i]);
			i++;
		}
		_putchar('\n');
		n++;
	}
	return (0);
}
