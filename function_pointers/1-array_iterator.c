#include <stddef.h>

/**
 * array_iterator - Array Iterator Function
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
