#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by  alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
