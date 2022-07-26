#include "lists.h"

/**
 *print_list - Prints all the elementes od te list_t list
 *@h: Singly linked list
 *Return: Len: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
size_t len = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->count, h->str);
	h = h->next;
	len++;
}
return (len);
}
