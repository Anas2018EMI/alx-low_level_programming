#include <stdlib.h>

/**
 * free_grid - Returns a pointer to a 2 dimensional array of integers
 * @grid: first arg
 * @height: Height of the grid
 *
 * Retun: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
