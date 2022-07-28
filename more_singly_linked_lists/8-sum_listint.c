#include "lists.h"

/**
 *Write a function that returns the sum of all the data (n) of a list
 *@haad: The head of the linked list
 *Return: Sum of the numbers and 0  list is emply
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
	return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
