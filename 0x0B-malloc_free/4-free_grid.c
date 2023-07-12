#include <stdlib.h>
#include "main.c"

/**
 * free_grid - frees a 2 dimensional grid 
 * @grid: grid that will be frees
 * @height: height of grid
 */

free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
