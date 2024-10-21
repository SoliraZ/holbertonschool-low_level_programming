#include <stdio.h>

/**
 * ft_size - Write the all size of any variable types.
 */

void	ft_size(void)
{
	char	charType;
	int	intType;
	long int	longintType;
	double	longlongintType;
	float	floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
}

/**
 * main - Main fonction.
 * Return: 0
 */

int	main(void)
{
	ft_size();
	return (0);
}
