#include "lists.h"
/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to LL
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodecount;

	nodecount = 0;

	if (h == NULL)
		return (nodecount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
