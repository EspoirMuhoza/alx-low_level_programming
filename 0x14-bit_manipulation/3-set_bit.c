#include "main.h"
/**
 * set_bit - My starting Point
 * @n: variable
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
