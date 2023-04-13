#include "main.h"
#include <stdlib.h>

/**
  * array_range - My function
  * @min: low limit
  * @max: high limit
  *
  * Return: value
  */
int *array_range(int min, int max)
{
	int *x, v = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[v] = min;
		v++;
		min++;
	}

	return (x);
}
