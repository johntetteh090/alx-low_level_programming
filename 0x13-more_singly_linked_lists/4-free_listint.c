#include "lists.h"
#include <stdlib.h>
/**
 * free_list int - defines the function
 * @head: describe the  argument
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
