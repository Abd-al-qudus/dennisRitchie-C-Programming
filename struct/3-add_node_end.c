#include "main.h"

/**
 * add_node_end - add element at the end of a linked list
 * @head: existing linked list
 * @str: string to store
 * return: new linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *stat;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	stat = *(head);
	if (stat == NULL)
		*head = new;
	else
	{
		while (stat->next != NULL)
			stat = stat->next;
		stat->next = new;
	}
	return (stat);
}
