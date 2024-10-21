#include <unistd.h>

/**
 * main - Main Function
 *
 * Return: 0
 */

int	main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
