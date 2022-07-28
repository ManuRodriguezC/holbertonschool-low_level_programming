#include "lists.h"

/**
 *get_nodeint_at_index - Write a function that returns the nth node of a list
 *@head: Head
 *@index: Index to elements
 *Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

for (; head != NULL; count++; head = head->next)
if (count == index)
	return (head);
return (NULL);
}
