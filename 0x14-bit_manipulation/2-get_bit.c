#include "main.h"
/**
 * get_bit - My starting point
 * @n: variable
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int kuci;

	if (!(index <= 63))
		return (-1);

	kuci = 1 << index;
	return ((n & kuci) > 0);
}
