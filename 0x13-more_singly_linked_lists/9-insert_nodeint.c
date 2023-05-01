#include "lists.h"

/**
 * insert_nodeint_at_index - My function
 * @head: pointer that points to head pointer of first node in linked list
 * @idx: index of list
 * @n: An integer
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temporary, *cursor;
	unsigned int countable = 0;

	if (!head)
		return (NULL);

	temporary = malloc(sizeof(listint_t));
	if (!temporary)
		return (NULL);
	(*temporary).n = n;
	cursor = *head;

	if (idx == 0)
	{
		temporary->next = *head;
		*head = temporary;
		return (*head);
	}

	while (cursor != '\0')
	{
		if (countable == idx - 1)
		{
			temp->next = cursor->next;
			(*cursor).next = temporary;
		}
		countable++;
		cursor = (*cursor).next;
	}
	if (idx > countable)
		return (NULL);
	return (temporary);

}
