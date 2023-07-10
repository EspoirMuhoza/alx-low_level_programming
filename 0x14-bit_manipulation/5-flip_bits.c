#include "main.h"
/**
 * flip_bits - My starting point
 * @n: variable
 * @m: input
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (!(n == 0 && m == 0))
	{
		if ((n & 1) != (m & 1))
			c++;
		m = m >> 1;
		n = n >> 1;
	}

	return (c);

}
