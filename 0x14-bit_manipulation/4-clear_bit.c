#include "main.h"
/**
 * clear_bit - Function to set value of bit at agiven index
 * @n: integer
 * @index: Bit to be setted
 * Return: 0
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!(index <= 63))
		return (-1);

	*n = (index > 63) ? (*n & ~(1ul << index)) : *n;
	return (1);
}
