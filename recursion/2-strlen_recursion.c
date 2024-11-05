#include "main.h"

/**
 * _strlen_recursion - STRLEN in recursive
 * @s: char *
 *
 * Return: Int
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
