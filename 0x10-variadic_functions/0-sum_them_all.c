#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - My function
 * @n: input
 * Return: summation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(val, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(val, const unsigned int);
	}

	va_end(val);

	return (sum);
}
