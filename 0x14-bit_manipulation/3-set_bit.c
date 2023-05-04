#include "main.h"
/**
 * set_bit - Function that set the value of bit to given index
 * @n: integer
 * @index: Bit we want to set
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(index <= 63))
		return (-1);

	*n |= 1ul << index;
	return (1);
}
