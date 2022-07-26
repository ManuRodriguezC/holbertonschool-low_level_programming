#include "lists.h"

/**
 *list_len - Count the number of elements in the list
 *@h: Value od the leng str
 *Return: Count is number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	h = h->next;
	count++;
}
return (count);
}
