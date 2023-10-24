#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the start of a linked list
 * @head: pointer to the first node in the list
 * @n: data  to be inserted into the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * Otherwise - address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnum;

	newnum = malloc(sizeof(listint_t));
	if (newnum == NULL)
	return (NULL);

	newnum->n = n;
	newnum->next = *head;
	*head = newnum;

	return (newnum);
}
