#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a listint_t list
 * @head: double pointers to that head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempe, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tempe = current;
		current = current->next;
		free(tempe);
	}
	*head = NULL;
}
