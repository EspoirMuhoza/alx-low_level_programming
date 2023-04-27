#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds new elements to the begginning of the list
 * @head: A pointer to the first element
 * @str: The string to be added to the
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupplication;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupplication = strdup(str);
	if (dupplication == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	(*new).str = dupplication;
	(*new).len = len;
	(*new).next = *head;

	*head = new;

	return (new);
}
