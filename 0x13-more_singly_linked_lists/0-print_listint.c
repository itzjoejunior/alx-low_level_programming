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

	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
