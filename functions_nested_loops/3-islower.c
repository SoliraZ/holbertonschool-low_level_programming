#include <stdio.h>
#include "main.h"

/**
 * _islower - Say if its lower case or no.
 *
 * @c: C is char.
 * Return: 1 if its lowercase else return 0
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
