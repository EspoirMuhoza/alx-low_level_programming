#include "lists.h"
#include <string.h>

/**
 * add_node_end - function to add new element to the end of list
 * @head: A pointer the head of the list
 * @str: The element to be added
 *
 * Return: If the function fails - NULL or address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupplication;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupplication = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	(*new).str = dupplication;
	(*new).length = length;
	(*new).next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
