#include <stdlib.h>
#include <string.h>

/**
 * str_concat - STRCONCAT Function
 * @s1: Char *
 * @s2: Char *
 *
 * Return: Char
 */

char	*str_concat(char *s1, char *s2)
{
	char	*str;
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	size = i + j + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size - j - 1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
