#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * perform all linked list operation
 * on a single linked list
 */

typedef struct list_s{
    char *name;
    unsigned int len;
    struct list_s *next;
}list_t;

list_t *create_list(list_t *head);
list_t *display(list_t *head);
list_t *insert_beg(list_t *head);
list_t *insert_end(list_t *head);
list_t *insert_before(list_t *head);
list_t *insert_after(list_t *head);
list_t *delete_beg(list_t *head);
list_t *delete_end(list_t *head);
list_t *delete_node(list_t *head);
list_t *delete_after(list_t *head);
list_t *delete_list(list_t *head);
list_t *sort_list(list_t *head);

int main(int argc, char *argv[])
{
    int option;
    list_t *start;

    start = NULL;
    do{
        printf("\n********** MAIN MENU *************\n");
        printf("\n1. Create a linked list\n");
        printf("2. Display the linked list\n");
        printf("3. Insert a new node at the beginning\n");
        printf("4. Insert a new node at the end\n");
        printf("5. Insert a new node before a given node\n");
        printf("6. Insert a new node after a given node\n");
        printf("7. Delete the first node\n");
        printf("8. Delete the last node\n");
        printf("9. Delete a node after the given node\n");
        printf("10. Delete the specified node\n");
        printf("11. Delete the entire list\n");
        printf("12. Sort the linked list\n");
        printf("13. Exit\n");
        printf("\nEnter your option: ");
        scanf("%d", &option);
        switch (option){
            case 1: start = create_list(start);
                    printf("List created successfully.\n");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = insert_before(start);
                    break;
            case 6: start = insert_after(start);
                    break;
            case 7: start = delete_beg(start);
                    break;
            case 8: start = delete_end(start);
                    break;
            case 9: start = delete_node(start);
                    break;
            case 10: start = delete_after(start);
                    break;
            case 11: start = delete_list(start);
                    break;
            case 12: start = sort_list(start);
                    break;
            case 13: exit(0);
            default: break;
        }
    }while(option);
    return (0);
}


list_t *create_list(list_t *head)
{
    list_t *new_node;
    int len;
    char str[50];

    new_node = malloc(sizeof(list_t));
    printf("\nEnter the first name: ");
    scanf("%s", &str);
    new_node->name = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;
    head = new_node;
    return (head);
}

list_t *display(list_t *head)
{
    list_t *ptr;

    ptr = head;
    while (ptr != NULL)
    {
        printf("First Name: %s\n", ptr->name);
        printf("Name Length: %ld\n", ptr->len);
        ptr = ptr->next;
    }
    return (head);
}

list_t *insert_beg(list_t *head)
{
    list_t *new_node;
    char str[50];

    new_node = malloc(sizeof(list_t));
    printf("\nEnter the first name: ");
    scanf("%s", str);
    new_node->name = strdup(str);
    new_node->len = strlen(str);
    new_node->next = head;
    head = new_node;
    return (head);
}

list_t *insert_end(list_t *head)
{
    char str[50];
    list_t *new_node, *ptr;

    printf("\nEnter the first name: ");
    scanf("%s", &str);
    new_node = malloc(sizeof(list_t));
    new_node->name = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return (head);
}

list_t *insert_before(list_t *head)
{
    list_t *new_node, *ptr, *preptr;
    char str[50], data[50];

    new_node = malloc(sizeof(list_t));
    printf("\nEnter the first name: ");
    scanf("%s", str);
    printf("\nEnter the name to insert the node before it: ");
    scanf("%s", &data);
    new_node->name = strdup(str);
    new_node->len = strlen(str);
    ptr = head;
    while (ptr->name != data)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return (head);
}

list_t *insert_after(list_t *head)
{
    list_t *new_node, *ptr, *postptr;
    char str[50], data[50];

    new_node = malloc(sizeof(list_t));
    printf("\nEnter the first name: ");
    scanf("%s", str);
    printf("\nEnter the name to insert the node before it: ");
    scanf("%s", &data);
    new_node->name = strdup(str);
    new_node->len = strlen(str);
    postptr = head;
    ptr = postptr;
    while (ptr->name != data)
    {
        ptr = postptr;
        postptr = postptr->next;
    }
    ptr->next = new_node;
    new_node->next = postptr;
    return (head);
}

list_t *delete_beg(list_t *head)
{
    list_t *ptr;

    ptr = head;
    head = head->next;
    free(head->name);
    free(head);
    return (head);
}

list_t *delete_end(list_t *head)
{
    list_t *ptr, *preptr;

    ptr = head;
    while (ptr != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr->name);
    free(ptr);
    return (head);
}

list_t *delete_node(list_t *head)
{
    list_t *ptr, *preptr;
    char data[50];

    printf("\nEnter the name to delete: ");
    scanf("%s", &data);
    ptr = head;
    if (ptr->name == data)
    {
        head = delete_beg(ptr);
        return (head);
    }
    else
    {
        while (ptr->name != data)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr->name);
        free(ptr);
        return (head);
    }
}

list_t *delete_after(list_t *head)
{
    list_t *ptr, *preptr;
    char data[50];

    printf("\nEnter the name to delete: ");
    scanf("%s", &data);
    ptr = head;
    preptr = ptr;
    while (preptr->name != data)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr->name);
    free(ptr);
    return (head);
}

list_t *delete_list(list_t *head)
{
    list_t *ptr;

    ptr = head;
    while (ptr != NULL)
    {
        head = delete_beg(ptr);
        ptr = head;
    }
}

list_t *sort_list(list_t *head)
{
    list_t *ptr1, *ptr2;
    char *str;
    size_t temp;

    ptr1 = head;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->len > ptr2->len)
            {
                temp = ptr2->len;
                str = ptr2->name;
                ptr2->len = ptr1->len;
                ptr2->name = ptr1->name;
                ptr1->len = temp;
                ptr1->name = str;
            }
            ptr2 = ptr2->next;
        }
    ptr1->next = ptr1;
    }
}
