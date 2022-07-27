#include "lists.h"

/**
 *add_nodeint_end - Add a new node at the end list
 *@head: Head of the linked list
 *@n: Valuo in the new node
 *Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
size_t count;

new = malloc(sizeof(listint_t));

if (new == NULL)
	return (NULL);

n->n = n;

for (count = 0; n[count]; count++)
;
new->n = count;
new->next = NULL;
temp = *head;

if (temp == NULL)
{
*hear = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (*head);
}
