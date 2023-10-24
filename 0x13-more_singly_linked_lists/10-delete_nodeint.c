#include "lists.h"

/**
 * delete_nodeint_at_index - Program deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the first element in the list.
 * @index: The index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int mynum;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (mynum = 0; mynum < (index - 1); mynum++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
