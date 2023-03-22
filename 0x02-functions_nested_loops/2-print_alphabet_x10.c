#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n, y;

	y = 0;

	while (y < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{_putchar(n);
		}
		y++;
		_putchar('\n');
	}
}
