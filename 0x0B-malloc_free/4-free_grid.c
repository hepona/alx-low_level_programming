#include "main.h"
#include <stdlib.h>
/**
 * free_grid -> free 2d grid
 * @grid: integer
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
