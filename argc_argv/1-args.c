#include "main.h"

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 = all good, 1 = error.
 */

int	main(int argc, char *argv[])
{
	argv[0][0] = '\0';
	if (argc < 10)
		_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
