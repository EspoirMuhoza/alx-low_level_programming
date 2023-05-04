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

	*n = *n & (~(1ul << index));
	return (1);
}
