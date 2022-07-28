#include "lists.h"

/**
 *sum_listint - Write a function that returns the sum of all the date(n)
 *@head: The head of the linked list
 *Return: Sum of the numbers and 0  list is emply
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
	return (0);
else 
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
