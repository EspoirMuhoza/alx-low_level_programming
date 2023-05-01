#include "lists.h"

/**
 * add_nodeint_end - function to add new node on the end of the list
 * @head: A pointer to the address of the head
 * @n: new node for the list
 * Return: the address of thhe element otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (!*head)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = (*last).next;
		(*last).next = new;
	}

	return (*head);
}
