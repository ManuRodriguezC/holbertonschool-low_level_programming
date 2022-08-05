#include "lists.h"

/**
 *get_dnodeint_at_index - Write a function that returns the nth
 *node of a dlistint_t linked list.
 *@head: Head of the list.
 *@index: Index node.
 *Return: node n of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
	if (count == index)
		return (temp);
	count++;
	temp = temp->next;
	}
	return (NULL);

}
