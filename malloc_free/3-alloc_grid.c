#include <stdlib.h>

/**
 * alloc_grid - Allocate Grid Function
 * @width: Int
 * @height: Int
 *
 * Return: Int
 */

int	**alloc_grid(int width, int height)
{
	int	**grid;
	int	i;
	int	j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
	free(grid);
}
