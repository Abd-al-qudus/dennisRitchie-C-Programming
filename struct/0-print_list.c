#include "main.h"

/**
 * print_list - print elements in a linked list
 * @head: linked list
 * return: elements in list
 */

size_t print_list(const list_t *head)
{
	size_t element;
	const list_t *list;

	element = 0;
	list = head;
	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", list->len, list->str);
		element += 1;
		list = list->next;
	}
	return (element);
}
