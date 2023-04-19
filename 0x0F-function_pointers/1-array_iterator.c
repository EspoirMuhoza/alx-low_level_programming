#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function to be iterated
 * @array: my array
 * @size: size of the array
 * @action: any valiable
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
