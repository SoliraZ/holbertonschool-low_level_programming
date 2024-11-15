#include <stdlib.h>

/**
 * free_grid - Free Grid Function
 * @grid: Int
 * @height: Int
 */

void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
