#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - My function
 * @separator: valiable
 * @n: elements to be outputed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int x;
	va_list w;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(w, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sep, va_arg(w, int));
	printf("\n");
	va_end(w);
}
