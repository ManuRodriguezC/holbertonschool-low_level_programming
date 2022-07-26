#include "lists.h"

/**
 *print_listint - Print all int elements of the list
 *@h: Singly linked list
 *Return: count is the number of elements in the listint
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
	printf("%d", h->n);
	h = h->next;
	count++;
}
return (count);
}
