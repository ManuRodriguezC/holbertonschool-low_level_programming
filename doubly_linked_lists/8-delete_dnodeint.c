#include "lists.h"

/**
 *delete_dnodeint_at_index - Delete node at given index.
 *@head: Head in the list
 *@index: Index to delete.
 *Return: List woth deleted node. 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (count == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
