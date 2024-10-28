#include "main.h"

/**
 * _strlen - Strlen Function
 * @s: Char
 *
 * Return: Len of char *s.
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
