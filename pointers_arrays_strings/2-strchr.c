#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function _STRCHR
 * @s: Char *
 * @c: Char
 *
 * Return: Char
 */

char	*_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
