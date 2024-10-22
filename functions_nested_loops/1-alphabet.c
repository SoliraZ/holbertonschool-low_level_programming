#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "1-main.c"

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
		putchar(letter++);
	putchar('\n');
}
