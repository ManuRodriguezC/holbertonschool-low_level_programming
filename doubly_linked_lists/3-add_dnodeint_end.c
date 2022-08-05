#include "lists.h"

/**
 *add_dnodeint_end - Write a function that adds a new node at
 *the end of a dlistint_t list
 *@head: Head of the list.
 *@n: Valuo of the new node.
 *Return: Address of the new node in list:
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;

if (head == NULL)
	return (NULL);

new = malloc(sizeof(dlistint_));
if (new == NULL)
	return (NULL);

temp = *head;
new->n = n;
new->next = NULL;
if (*head == NULL)
{
	*head = new;
	new->prev = NULL;
	return (new);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
return (new);
}
