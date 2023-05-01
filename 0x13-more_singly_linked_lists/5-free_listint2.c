#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: A pointer to the address of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (!head)
		return;

	while (*head)
	{
		temporary = (*head).next
		free(*head);
		*head = temporary;
	}

	head = NULL;
}
