#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to output all list element
 * @h: my list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
