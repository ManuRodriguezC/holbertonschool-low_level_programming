#ifndef LISTS_H
#define LISTS_H

/* Librarys */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structures */

/**
 *struct list - Singly linked list
 *@str: String present in the nodo
 *@count: Length od the string
 *@next: Pointer to the next node
 *Description: Singly linked list node structure
 */

struct list
{
	char *str;
	unsigned int count;
	struct _list *next;
} list_t;


/* Prototypes */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
