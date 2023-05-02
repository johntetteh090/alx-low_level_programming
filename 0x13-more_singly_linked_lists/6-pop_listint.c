#include "lists.h"
#include <stdlib.h>
/**
 * pop_list int - removes the head of the list and returns its contents immediately
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int in;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		in = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		in = 0;
	return (in);
}
