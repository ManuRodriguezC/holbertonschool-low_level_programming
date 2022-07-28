#include "lists.h"

/**
 *insert_nodeint_at_index - Write a function that inserts
 *a new node at a given position.
 *@head: The head of the list.
 *@idx: Is of specific position for add new node.
 *@n: Is de value to add in the new position
 *Return: Address the new node. of Null in case failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

if (idx != 0)
	for (i = 0; i < idx && temp != NULL; i++)
		temp = temp->next;

new = malloc(sizeof(listint_t));

if (new == NULL || temp == NULL && idx != 0)
	return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = temp->next;
temp->next = new;
}
return (new);
}
