#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - My function
 *@grid: rows
 *@height: columns
 * Return: a pointer to a 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int x;
	int *p;

	for (x = 0; x < height; x++)
	{
		p = grid[x];
		free(p);
	}
	free(grid);
}
