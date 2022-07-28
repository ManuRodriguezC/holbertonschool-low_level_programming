#include "lists.h"

/**
 *print_listint_safe - Write a function that prints a listint_t.
 *@head: The head of the linked list.
 *Return: Number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *hare;
	const listint_t *tortoise;

	tortoise = head;

	while (tortoise != NULL)
	{
		hare = tortoise;
		printf("[%p] %i\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		count++;
		if (hare < tortoise)
		{
			printf("-> [%p] %i\n", (void *)tortoise, tortoise->n);
			break;
		}
	}
return (count);
}
