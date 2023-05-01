#include "lists.h"
#include <stdio.h>

/**
 * print_listint -function to print all elements on the list
 * @h: A pointer to the head
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (nodes);
}
