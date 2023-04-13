#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - My function
  * @ptr: pointer
  * @old_size: size
  * @new_size:new size
  *
  * Return: nothing
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *kuci;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		kuci = malloc(new_size);

		if (kuci == NULL)
			return (NULL);

		return (kuci);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	kuci = malloc(new_size);

	if (kuci == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		kuci[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (kuci);
}
