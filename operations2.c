#include "list.h"

/**
 * delete_begin - delete the beginning of the linked list
 * @head: the linked list
 * Return: the new linked list
 */
student_t *delete_begin(student_t **head)
{
	student_t *temp;

	if (*head == NULL)
	{
		printf("[--] EMPTY LIST\n");
		return (NULL);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (*head);
}

/**
 * delete_end - delete the end of a linked list
 * @head: the linked list
 * Return: the new linked list
 */
student_t *delete_end(student_t **head)
{
	student_t *temp;

	temp = *head;
	if (*head == NULL)
	{
		printf("[--] EMPTY LIST\n");
		return (NULL);
	}
	while (temp->next != NULL)
		temp = temp->next;
	free(temp);
	return (*head);
}

/**
 * delete_list - delete the linked list
 * @head: linked list
 * Return: void
 */
void delete_list(student_t **head)
{
	student_t *temp;

	temp = *head;
	while (temp != NULL)
		temp = delete_begin(head);
	printf("[--] DATABASE DELETED\n");
}

/**
 * delete_index - delete node at index
 * @head: linked list
 * Return: the new linked list
 */
student_t *delete_index(student_t **head)
{
	student_t *next, *prev, *temp;
	int count, num;

	count = 0;
	printf("Enter index to delete: ");
	scanf("%d", &num);
	if (list_size(head) < num)
	{
		printf("[--] INVALID INDEX\n");
		return (*head);
	}
	next = *head;
	while (count < num)
	{
		prev = next;
		next = next->next;
		count++;
	}
	next = next->next;
	temp = prev->next;
	prev->next->next = next;
	free(temp);
	return (*head);
}
