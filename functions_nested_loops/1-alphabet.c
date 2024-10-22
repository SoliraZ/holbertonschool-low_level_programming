#include <unistd.h>
#include "main.h"

/**
 * main - Main Function
 *
 * Return: 0
 */

int     main(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		_putchar(letter++);
	_putchar('\n');
	return (0);
}
