#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of list.
 * @head: A pointer to the address of the head of the list
 * Return: If the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int hold;

	if (!*head)
		return (0);

	temporary = *head;
	hold = (*head)->n;
	*head = (*head)->next;

	free(temporary);

	return (hold);
}
