#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Outputs every element in a linked list
 * @h: To print a linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t mynum = 0;

	while (h)
	{
		mynum++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (mynum);
}
