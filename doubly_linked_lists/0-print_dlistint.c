#include "lists.h"

/**
 *print_dlistint - Write a function that prints all the
 *elements of a dlistint_t list.
 *@h: Linked list.
 *Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count;

for (count = 0; h; count++)
{
	printf("%d\n", h->n);
	h = h->next;
}
return (count);
}
