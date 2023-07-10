#include "main.h"
/**
 * get_endianness - My starting point
 *
 * Return: something
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
