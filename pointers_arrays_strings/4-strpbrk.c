#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - STRPBRK Function
 * @s: char *
 * @accept: char *
 *
 * Return: Char
 */

char	*_strpbrk(char *s, char *accept)
{
	int	n;

	if (s[0] == '\0' || accept[0] == '\0')
		return ('\0');
	while (*s != '\0')
	{
		n = 0;
		while (accept[n])
		{
			if (*s == accept[n])
				return (s);
			n++;
		}
		s++;
	}
	return ('\0');
}
