#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - my index
 * @array: array
 * @size: size of my array
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
do {
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
} while (0);
return (-1);
}
