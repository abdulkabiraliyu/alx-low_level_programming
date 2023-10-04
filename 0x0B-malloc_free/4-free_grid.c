#include "main.h"
#include "stdlib.h"

/**
 * free_grid - free the memory beign pointed to
 *
 * @grid: pointer to the memory
 * @height: number of rows in the array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;


	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);

}
