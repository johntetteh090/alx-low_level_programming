#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print the answer
 * Return: number of nodes in the list from the code
 */
size_t print_list(const list_t *h)
{
	size_t in;

	for (in = 0; h; in++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (in);
}
