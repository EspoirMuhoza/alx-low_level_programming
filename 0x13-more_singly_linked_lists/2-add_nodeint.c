#include "lists.h"

/**
 * add_nodeint - My function to add new node to the list
 * @head: A pointer to the address of the head.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL otherwise return the address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	strcpy(new->n, n);
	new->next = &(*head);

	*head = new;

	return (new);
}
