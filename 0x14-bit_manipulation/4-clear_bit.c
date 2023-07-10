#include "main.h"
/**
 * clear_bit - My starting point
 * @n: variable
 * @index: index
 * Return: 0
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}

