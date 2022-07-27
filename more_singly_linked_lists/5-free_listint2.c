#include "lists.h"

/**
 *free_listint2 - Free linked list
 *@head: The head of the linked
 *
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
	return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
