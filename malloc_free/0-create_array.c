#include <stdlib.h>

/**
 * create_array - Create Array function
 * @size: Unsigned int
 * @c: char
 *
 * Return: Char
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char	*s;

	i = 0;
	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
