#include "main.h"
#include <stdio.h>

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 = all good, 1 = error.
 */

int	main(int argc, char *argv[])
{
	argc--;
	(void)argv;
	printf("%i\n", argc);
	return (0);
}
