#include <stdio.h>

/**
 * main - Main Function
 *
 * Return: 0
 */

int	main(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
