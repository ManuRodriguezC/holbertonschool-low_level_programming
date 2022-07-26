#include "lists.h"

/**
 *add_nodeint - Add a new node at the begin od the list
 *@head: head of the list
 *@n: Value to add to the new node}
 *Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = *head;

new = malloc(sizeof(listint_t));

if (new == NULL)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (*head);
}
