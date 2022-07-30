#include "lists.h"

/**
 *delete_nodeint_at_index - delete one node in somethings position.
 *@head: linked list
 *@index: Is a specific position to delete.
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *dele;
listint_t *next;
unsigned int position;

dele = *head;

if (index != 0)
{
for (position = 1; position < index && dele != NULL; position++)
{
dele = dele->next;
}
}
if (dele == NULL || (dele->next == NULL && index != 0))
	return (-1);
next = dele->next;

if (index != 0)
{
dele->next = next->next;
free(next);
}
else
{
free(dele);
*head = next;
}
return (1);
}
