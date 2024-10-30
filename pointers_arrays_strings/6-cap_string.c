#include "main.h"

/**
 * cap_string - Capitalize Function
 * @str:
 *
 * Return: String
 */

char	*cap_string(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == 44 || str[i - 1] == 32 || str[i - 1] == 59 || str[i - 1] == 46 || str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34 || str[i - 1] == 40 || str[i - 1] == 41 || str[i - 1] == 123 || str[i - 1] == 125))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
