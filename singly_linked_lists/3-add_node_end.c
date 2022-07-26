#include "lists.h"

/**
 *add_node_end - Add the new nodo to end of the list-t list
 *@head: Head od the linked link
 *@str: New string in the list
 *Return: addres of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t count;

new = malloc(sizeof(list_t));

if (new == NULL)
	return (NULL);

new->str = strdup(str);

for (count = 0; str[count]; count++)
;
new->len = count;
new->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
{
	temp = temp->next;
	temp->next = new;
}
}
return (*head);
}
