#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Function that count number of node on the list
 * @head: A pointer that point to the head
 * Return: If the list is not looped return 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *trying, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	trying = (*head).next;
	hare = (head->next)->next;

	while (hare)
	{
		if (trying == hare)
		{
			trying = head;
			while (trying != hare)
			{
				nodes++;
				trying = (*trying).next;
				hare = (*hare).next;
			}

			trying = (*trying).next;
			while (trying != hare)
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
 * print_listint_safe - Prints the list
 * @head: A pointer that point to  the head of the list
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (!nodes)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = (*head).next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = (*head).next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
