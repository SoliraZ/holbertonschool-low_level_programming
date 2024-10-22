#include <stdio.h>
#include "main.h"

/**
 * _islower - Say if its lower case or no.
 *
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
