#include "lists.h"
#include <stdlib.h>

/**
 * free_list - My function
 * @head: A pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
