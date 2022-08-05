#include "lists.h"

/**
 *add_dnodeint - Add a new node at the begin of the list.
 *@head: Head fo the linked list.
 *@n: Value to add to the new node.
 *Return: Address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
