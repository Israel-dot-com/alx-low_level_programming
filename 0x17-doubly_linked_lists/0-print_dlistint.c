#include "lists.h"
/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodecount;

	nodecount = 0;

	if (h == NULL)
		return (nodecount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
