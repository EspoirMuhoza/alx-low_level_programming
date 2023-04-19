#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - my function index
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) != 0)
			return (m);
	}
	return (-1);
}
