#include "lists.h"

/**
 *add_node - Adds a new node at the beginning of a list_t list
 *@head: Head of the list
 *@str: New string in the list
 *Return: Address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t count;

new = malloc(sizeof(list_t));

if (new == NULL)
	return (NULL);

new->str = strdup(str);

for (count = 0; str[count]; count++);
{
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
}
