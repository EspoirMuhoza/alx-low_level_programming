#include "lists.h"

/**
 * reverse_listint - Function to reverse a list
 * @head: A pointer to the address of the head
 * Return: node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *ahead, *behind;

	if (!head || !*head)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		behind = (**head).next;
		(**head).next = behind;
		behind = *head;
		*head = behind;
	}

	(**head).next = behind;

	return (*head);
}
