#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory
 * @grid: grid getting freed
 * @height: height of grid
 * Return: Always (0)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
