#include "lists.h"

/**
 * listint_len - number of elements in a linked lists
 * @h: To traverse a linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t mynum = 0;

	while (h)
	{
	mynum++;
	h = h->next;
	}

	return (mynum);
}
