#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2D grid
 * @grid: parameter representing 2D array
 * @height: the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = height - 1;

	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
