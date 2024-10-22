#include <stdio.h>

/**
 * main - Main Function
 *
 * Return: 0
 */

int	main(void)
{
	int	num;

	num = 0;
	while (num <= 9)
	{
		putchar(48 + num++);
		if (num <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
