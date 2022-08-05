#include "lists.h"

/**
 *sum_dlistint - Write a function that returns the sum of all the data
 *(n) of a dlistint_t linked list.
 *@head: Head of the list.
 *Return: Sum of the data nodes in list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
