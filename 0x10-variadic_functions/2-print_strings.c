#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - my function
 * @separator: comma space
 * @n: numbers
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *p;
	unsigned int i;
	va_list w;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(w, n);

	if (n != 0)
		printf("%s", va_arg(w, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(w, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(w);
}
