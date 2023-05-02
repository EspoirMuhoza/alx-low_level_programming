#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Function that returns the unique nodes on the list
 * @head: A pointer to the head
 * Return: If the list is not looped otherwise return unique node
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *trying, *hare;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	trying = (*head).next;
	hare = (head->next)->next;

	while (hare)
	{
		if (trying == hare)
		{
			trying = head;
			while (!(trying == hare))
			{
				nodes++;
				trying = (*trying).next;
				hare = (*hare).next;
			}

			trying = (*trying).next;
			while (!(trying == hare))
			{
				nodes++;
				trying = (*trying).next;
			}

			return (nodes);
		}

		trying = (*trying).next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Fuction that frees list
 * @h: A pointer to the address of the list
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temporary;
	size_t nodes, i;

	nodes = looped_listint_count(*h);

	if (!nodes)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temporary = (**h).next;
			free(*h);
			*h = temporary;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			temporary = (**h).next;
			free(*h);
			*h = temporary;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
