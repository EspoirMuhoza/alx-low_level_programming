#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - My starting point
 *
 * @n: constant
 *
 * Return: no return type
 */
void print_binary(unsigned long int n)
{
	unsigned long int print = 1ul << 63;
	char x = '0';

	while (!(print & n) && print != 0)
		print = printt >> 1;

	if (!print)
		write(1, &c, 1);

	while (print)
	{
		if (print & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		print = print >> 1;
	}
}
