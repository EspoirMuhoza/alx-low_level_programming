#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - My function
 *@width: rows
 *@height: columns
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int a;
	int b;
	int c;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		*(matrix + a) = (int *)malloc(width * sizeof(int));
		if (*(matrix + a) == NULL)
		{
			for (a = 0; a < height; a++)
			{
				p = matrix[a];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (b = 0; b < width; b++)
		{
			matrix[c][b] = 0;
		}
	}
	return (matrix);
}
