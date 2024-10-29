#include "main.h"

/**
 * _atoi - Atoi Function
 * @s: string
 *
 * Return: The string in int
 */

int	_atoi(char *s)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while ((s[i] < '0' && s[i] > '9') || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			negative = negative * -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * negative);
}
