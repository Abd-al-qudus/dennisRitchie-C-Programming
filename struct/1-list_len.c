#include "main.h"

/**
 * list_len - find the length of a linked list
 * @head: linked list
 * return: number of nodes
 */

size_t list_len(const list_t *head)
{
	size_t element;
	const list_t *list;

	list = head;
	element = 0;
	while (list != NULL)
	{
		element++;
		list = list->next;
	}
	return (element);
}
