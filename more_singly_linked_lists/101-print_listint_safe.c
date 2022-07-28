#include "lists.h"

/**
 *print_listint_safe - Write a function that prints a listint_t.
 *@head: The head of the linked list.
 *Return: Number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		printf("[%p] %i\n", &head, 98);

	while (head != NULL)
	{
		printf("[%p] %i\n", &head, head->n);
		head = head->next;
		count++;
	}
return (count);
}
