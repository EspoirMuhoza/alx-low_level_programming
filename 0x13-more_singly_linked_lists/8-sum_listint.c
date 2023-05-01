#include "lists.h"

/**
 * sum_listint - Function to calculate the sum of list
 * @head: A pointer to the head of the list.
 * Return: If the list is empty return 0 otherwise return sum.
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;

	while (head)
	{
		sum = sum + (*head).n;
		head = (*head).next;
	}

	return (sum);
}
