#include "lists.h"

/**
 *free_list - Free memory of the linked
 *@head: The beginning of the list_t
 */
void free_list(list_t *head)
{
list_t *temp;

while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
