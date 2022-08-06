#include "lists.h"

/**
 *insert_dnodeint_at_index - Function that insert a node in ramdom position.
 *@h: Head of the list.
 *@idx: Index.
 *@n: Data in new node.
 *Return: New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; temp && count < idx; count++)
	{
		if (count == (idx - 1))
		{
		if (temp->next == NULL)
			return (add_dnodeint_end(h, n));
		new->next = temp->next;
		new->prev = temp;
		temp->next->prev = new;
		temp->next = new;
		return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
