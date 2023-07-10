#include "main.h"
/**
 * get_endianness - My starting point
 *
 * Return: something
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}
