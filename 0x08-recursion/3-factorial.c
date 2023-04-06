#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	return ((n > 0) ? (n * factorial(n - 1)) : 1);
}
