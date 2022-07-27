#include "lists.h"

/**
 *add_nodeint_end - Add a new node at the end list
 *@head: Head of the linked list
 *@n: Valuo in the new node
 *Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = (listint_t *)malloc(sizeof(listint_t));
listint_t *final = *head;

if (new == NULL)
	return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (final->next != NULL)
final = final->next;
final->next = new;
return (final->next);
}
