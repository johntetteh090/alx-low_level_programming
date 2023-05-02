#include "lists.h"
/**
 * sum_listint - sums all elements of a list
 * @head: pointer to the head of the list
 * Return: sum of all elements in the list
 */
int sum_listint(listint_t *head)
{
	int sume;

	for (sume = 0; head; sume += head->n, head = head->next)
		;
	return (sume);
}
