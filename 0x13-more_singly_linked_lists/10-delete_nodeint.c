#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete node of a certain index given
 * @head: A pointer to the address of the list
 * @index: The index of the node to be deleted
 * Return: If is true return 1 otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary, *copy = *head;
	unsigned int node;

	if (!copy)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (!copy->next)
			return (-1);

		copy = (*copy).next;
	}

	temporary = (*copy).next;
	copy->next = temporary->next;
	free(temporary);
	return (1);
}
