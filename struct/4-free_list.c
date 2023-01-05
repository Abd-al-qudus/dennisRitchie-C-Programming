#include "main.h"

/**
 * free_list - free linked list
 * @head: linked list to free
 * return: void
 */

void free_list(list_t *head)
{
	list_t *cur;

	cur = head;
	while (cur != NULL)
	{
		head = head->next;
		free(cur->str);
		free(cur);
		cur = head;
	}
	free(head);
}

