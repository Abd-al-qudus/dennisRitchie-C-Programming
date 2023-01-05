#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE 100
#define MAX_DB 20

/**
 * struct student_s - a struct that contains students details
 * @name: student name
 * @DOB: student date of birth
 * @level: level
 */
typedef struct student_s
{
	char *first_name;
	char *last_name;
	char *DOB;
	int level;
	struct student_s *next;
}student_t;

student_t *add_node(student_t **head);
student_t *add_node_end(student_t **head);
void print_list(student_t **head);
ssize_t list_size(student_t **head);
student_t *add_before(student_t **head);
student_t *delete_begin(student_t **head);
student_t *delete_end(student_t **head);
void delete_list(student_t **head);
student_t *delete_index(student_t **head);

#endif

