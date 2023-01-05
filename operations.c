#include "list.h"

/**
 * add_node - add nodes at the beginning of a singly linked list
 * @head: existing linked list
 * Return: modified linked list
 */
student_t *add_node(student_t **head)
{
	student_t *new;
	char first[50], last[50], stdDOB[20];
	int level;

	new = malloc(sizeof(student_t));
	if (new == NULL)
		return (NULL);
	printf("Enter Student's First Name: ");
	scanf("%s", first);
	new->first_name = strdup(first);
	printf("Enter Student's Last Name: ");
	scanf("%s", last);
	printf("Enter Student's DOB: ");
	scanf("%s", stdDOB);
	new->last_name = strdup(last);
	new->DOB = strdup(stdDOB);
	printf("Enter Level: ");
	scanf("%d", &level);
	new->level = level;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;
	printf("RECORD CREATED\n");
	return (*head);
}


/**
 * print_list - prints the student info in the database
 * @head: linked list
 * Return: void
 */
void print_list(student_t **head)
{
	student_t *temp;

	temp = *head;
	if (temp == NULL)
		printf("EMPTY DATABASE\n");
	while (temp != NULL)
	{
		printf("[*] NAME: %s %s\n", temp->first_name, temp->last_name);
		printf("[*] DOB: %s\n", temp->DOB);
		printf("[*] LEVEL: %d\n", temp->level);
		printf("------------\n");
		temp = temp->next;
	}
}


/**
 * add_node_end - add the node at the end of the linked list
 * @head: linked list to edit
 * Return: new linked list
 */
student_t *add_node_end(student_t **head)
{
	student_t *temp, *new;
	char first[50], last[50], stdDOB[20];
	int level;

	temp = *head;
	new = malloc(sizeof(student_t));
	if (new == NULL)
		return (NULL);
	printf("Enter Student's First Name: ");
	scanf("%s", first);
	new->first_name = strdup(first);
	printf("Enter Student's Last Name: ");
	scanf("%s", last);
	printf("Enter Student's DOB: ");
	scanf("%s", stdDOB);
	new->last_name = strdup(last);
	new->DOB = strdup(stdDOB);
	printf("Enter Level: ");
	scanf("%d", &level);
	new->level = level;
	if (temp == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
	printf("RECORD CREATED\n");
	return (*head);
}


/**
 * add_before - add a linked list before the given node
 * @head: linked list
 * Return: modified linked list
 */
student_t *add_before(student_t **head)
{
	student_t *prev, *next, *new;
	char first[50], last[50], stdDOB[20];
	int level, count, num;

	next = (*head)->next;
	new = malloc(sizeof(student_t));
	if (new == NULL)
		return (NULL);
	printf("Enter index to insert: ");
	scanf("%d", &num);
	if (list_size(head) < num)
	{
		printf("INVALID INDEX!!!\n");
		return (*head);
	}
	printf("Enter Student's First Name: ");
	scanf("%s", first);
	new->first_name = strdup(first);
	printf("Enter Student's Last Name: ");
	scanf("%s", last);
	printf("Enter Student's DOB: ");
	scanf("%s", stdDOB);
	new->last_name = strdup(last);
	new->DOB = strdup(stdDOB);
	printf("Enter Level: ");
	scanf("%d", &level);
	new->level = level;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	count = 0;
	while (count != num)
	{
		prev = next;
		next = next->next;
		count++;
	}
	prev->next = new;
	new->next = next;
	printf("RECORD CREATED\n");
	return (*head);
}

/**
 * list_size - get the size of the linked list
 * @head: linked list to traverse
 * return: count
 */
ssize_t list_size(student_t **head)
{
	student_t *temp;
	ssize_t count;

	count = 0;
	temp = *head;
	if (temp == NULL)
		return (count);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
