#include "main.h"
/**
 * flip_bits - Entry point
 * @n: integer1
 * @m: integer2
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int countable = 0;

	while (!(n == 0 && m == 0))
	{
		if ((n ^ m) & 1)
			countable++;
		m = m >> 1;
		n = n >> 1;
	}

	return (countable);

}
