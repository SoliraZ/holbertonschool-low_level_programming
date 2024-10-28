#include "main.h"

/**
 * rev_string - Reverse string
 * @s: String
 */

void	rev_string(char *s)
{
	int	i;
	int	l;
	char	temp;

	i = 0;
	l = 0;
	while (s[l] != '\0')
		l++;
	while (i < (l / 2))
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
}
