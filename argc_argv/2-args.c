#include "main.h"
#include <stdio.h>

/**
 * main - Main Function
 * @argc: Int
 * @argv: Char
 *
 * Return: 0 if all work, 1 if there is an error
 */

int     main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			printf("%c", argv[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
