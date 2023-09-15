#include "lists.h"

/**
 * dlistint_len - Fuctn returns number of elements
 * in a double linked List.
 *
 * @h: Head of the List.
 * Return: Number of Nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
