#include "lists.h"

/**
 *pop_listint - Delete head of the node in the linked list
 *@head: The head of the linked list
 *Return: Date in the element delete
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int n = 0;

if (*head != NULL)
{
new = (*head)->next;
n = (*head)->n;
free(*head);
*head = new;
}
return (n);
}
