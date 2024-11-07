#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 if all work, 1 if there is an error
 */

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%i\n", n1 * n2);
	return (0);
}
