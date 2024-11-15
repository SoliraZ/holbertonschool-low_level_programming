#include <stdlib.h>

/**
 * calloc - allocate memory for an array, using malloc
 *
 * @param nmemb number of elements
 * @param size size of each element
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char	*ptr;
	unsigned int	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
