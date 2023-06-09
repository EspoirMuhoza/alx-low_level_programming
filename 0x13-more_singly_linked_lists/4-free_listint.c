#include "lists.h"

/**
 * free_listint - Function that free the list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = (*head).next;
		free(head);
		head = temporary;
	}
}
