#include "lists.h"

/**
 *free_listint - Free linked list
 *@head: The head of the linked list
 *
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
