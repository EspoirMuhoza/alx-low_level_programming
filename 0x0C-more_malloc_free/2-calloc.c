#include "main.h"
#include <stdlib.h>

/**
  * _calloc - My function
  * @nmemb: number
  * @size: size
  *
  * Return: Nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (x < l)
	{
		p[x] = 0;
		x++;
	}

	return (p);
}
