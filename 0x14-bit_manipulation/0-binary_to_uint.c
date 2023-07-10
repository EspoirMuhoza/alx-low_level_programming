#include "main.h"
/**
 * binary_to_uint - My starting point to the code
 * @b: constant character
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base = 1, i = 0;

	if (!b)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * base);
		base = base * 2;
		i--;
	}


	return (result);

}
