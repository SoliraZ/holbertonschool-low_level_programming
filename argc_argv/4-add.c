#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int	j;
	int	res;

	i = 1;
	res = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
		printf("%i\n", atoi(argv[1]));
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%i\n", res);
	return (0);
}
