#include "lists.h"

/**
 * find_listint_loop - Function that finds if the list is looped
 * @head: A pointer to the head of the list
 * Return: If there is no loop return NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *trying, *hare;

	if (!head || !head->next)
		return (NULL);

	trying = (*head).next;
	hare = (head->next)->next;

	while (hare)
	{
		if (trying == hare)
		{
			trying = head;

			while (!(trying == hare))
			{
				trying = (*trying).next;
				hare = (*hare).next;
			}

			return (trying);
		}

		trying = (*trying).next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
