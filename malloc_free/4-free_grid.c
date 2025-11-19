#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: blabla
 * @height: blabla
 *
 * Return: to free_grid
 */

void free_grid(int **grid, int height)
{
	int legrid;

	if (grid == NULL || height <= 0)
		return;


	for (legrid = 0; legrid < height; legrid++)
		free(grid[legrid]);
	free(grid);
}
