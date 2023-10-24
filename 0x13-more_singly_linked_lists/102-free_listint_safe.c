#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	/*Using while Loop*/
	while (current != NULL)
	{
		len++;
		next = current->next;
		free(current);
		if (next <= current)
		{
			*h = NULL;
			exit(98);
		}
		current = next;
	}

	*h = NULL;
	return (len);
}
