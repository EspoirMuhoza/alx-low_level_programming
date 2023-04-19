#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints the name
 * @name: the name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	(name == NULL || f == NULL) ? (void)0 : f(name);

}
