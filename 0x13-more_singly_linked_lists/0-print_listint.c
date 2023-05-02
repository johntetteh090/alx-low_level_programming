include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list print
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t in;

	for (in = 0; h; in++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (in);
}
