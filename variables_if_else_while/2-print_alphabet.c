#include <stdio.h>

/**
 * main - Main Function
 *
 * Return: 0
 */

int	main(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
