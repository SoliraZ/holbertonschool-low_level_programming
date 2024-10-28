#include "main.h"

/**
 * _isupper - Function isupper
 * @c: is Int
 *
 * Return: 1 if c is uppercase, 0 if not
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
