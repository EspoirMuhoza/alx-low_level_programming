#include "main.h"
/**
 * get_bit - Fuction to return value of a bit at given index
 * @n: intger
 * @index: bit we want to get
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (!(index <= 63))
		return (-1);

	x = 1 << index;
	return ((n & (1 << x)) != 0);
}
