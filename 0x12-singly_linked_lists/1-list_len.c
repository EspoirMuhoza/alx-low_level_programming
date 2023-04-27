#include "lists.h"

/**
 * list_len - Fuction that checks numbers of all elements in my list
 * @h: My list
 *
 * Return: The number of element
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
