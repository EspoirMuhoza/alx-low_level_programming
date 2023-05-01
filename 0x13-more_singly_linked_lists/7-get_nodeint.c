#include "lists.h"

/**
 * get_nodeint_at_index - Function that locates a node of a list
 * @head: A pointer to the head of the list.
 * @index: The index of the node
 * Return: If the node doesn't appear return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_to_be_located;

	for (node_to_be_located = 0; node_to_be_located < index; node_to_be_located++)
	{
		if (!head)
			return (NULL);

		head = (*head).next;
	}

	return (head);
}
