#include "main.h"

/**
 * add_node - add new node at the beginning of a linked list
 * @head: existing linked list
 * @str: string to store
 * return: pointer to the new linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

