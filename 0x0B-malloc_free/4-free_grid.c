#include "main.h"

/**
 * *free_grid -  free up array grid
 *
 * @grid: double pointer two dimantion grid
 * @height: height of grid
 *
 * Return: free memory
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
