#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: bla bla
 * @height: bla bla
 *
 * Return: to alloc_grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int planA, planB;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);


	for (planA = 0; planA < height; planA++)
	{
		grid[planA] = malloc(sizeof(int) * width);
		if (grid[planA] == NULL)
		{
			for (planB = 0; planB < planA; planB++)
				free(grid[planB]);
			free(grid);
			return (NULL);
		}
		for (planB = 0; planB < width; planB++)
			grid[planA][planB] = 0;
	}
	return (grid);
}
