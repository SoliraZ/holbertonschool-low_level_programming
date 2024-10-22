#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Say if its lower case or no.
 *
 * @c: C is char.
 * Return: 1 if its lowercase or uppercase else return 0
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
