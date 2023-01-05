#include "list.h"

/**
 * main - call other function
 * takes no arguments
 * Return: always 0
 */

int main(void)
{
	student_t *head;
	int option;

	head = NULL;
	printf("*****************************************\n");
	printf("*********** STUDENT DATABASE ************\n");
	printf("*****************************************\n");
	printf(" OPTIONS: \n");
	printf("[*] CREATE A DATABASE: \n");
	printf("[*] ADD DATA TO DATABASE(FORWARD): \n");
	printf("[*] ADD DATA TO DATABASE(REVERSE): \n");
	printf("[*] ADD DATA TO DATABASE(INDEXED): \n");
	printf("[*] SHOW STUDENT DATA: \n");
	printf("[*] DELETE FIRST DATA: \n");
	printf("[*] DELETE LAST DATA: \n");
	printf("[*] DELETE DATA(INDEXED): \n");
	printf("[*] DELETE DATABASE: \n");
	printf("[*] EXIT: \n");
	do {
		printf("ENTER AN OPTION: ");
		scanf("%d", &option);
		switch (option)
		{
			case 1:
				head = add_node(&head);
				break;
			case 2:
				head = add_node(&head);
				break;
			case 3:
				head = add_node_end(&head);
				break;
			case 4:
				head = add_before(&head);
				break;
			case 5:
				print_list(&head);
				break;
			case 6:
				head = delete_begin(&head);
				break;
			case 7:
				head = delete_end(&head);
				break;
			case 8:
				head = delete_index(&head);
				break;
			case 9:
				delete_list(&head);
				break;
			case 10:
				exit(0);
			default:
				break;
		}
	} while (option != 10);
	return (0);
}
