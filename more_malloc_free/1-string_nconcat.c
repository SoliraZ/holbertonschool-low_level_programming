#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*str;
	unsigned int	i = 0, j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	str = malloc(sizeof(char) * (i + n + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = s1[j];
		j++;
	}
	j = 0;
	while (j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + n] = '\0';
	return (str);
}
