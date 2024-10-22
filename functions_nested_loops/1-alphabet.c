#include <unistd.h>
#include "main.h"

/**
 * main - Main Function
 *
 * Return: 0
 */

void	print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		_putchar(letter++);
	_putchar('\n');
}
