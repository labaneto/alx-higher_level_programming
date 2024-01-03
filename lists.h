#ifndef LIST_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - linked list
 * @t: integer
 * @next: next node points
 *
 * Description: structure of a linked list
 */
typedef struct listint_s
{
	int t;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head,const int t);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#end /*LISTS_H*/
