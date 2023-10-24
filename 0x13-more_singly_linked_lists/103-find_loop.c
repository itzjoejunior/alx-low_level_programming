#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	hare = (head->next)->next;

	
	while (hare)
	{
		if (slow == hare)
		{
			slow = head;

			while (slow != hare)
			{
				slow = slow->next;
				hare = hare->next;
			}

			return (slow);
		}

		slow = slow->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
