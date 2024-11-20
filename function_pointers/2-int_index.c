#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if error or no matches
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
