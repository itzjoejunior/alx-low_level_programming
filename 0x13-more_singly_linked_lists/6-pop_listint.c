#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 * Otherwise return head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
	return (0);

	temp = (*head);
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);


	return (ret);
}
