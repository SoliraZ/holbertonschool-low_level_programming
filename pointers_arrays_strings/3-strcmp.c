#include "main.h"

/**
 * _strcmp - String compare.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Int
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
