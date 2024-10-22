#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Main Function
 *
 * Return: 0
 */

void	print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
