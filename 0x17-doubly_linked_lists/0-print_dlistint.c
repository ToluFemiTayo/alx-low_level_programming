#include "lists.h"

/**
 * print_dlistint - Fuctn prints all the elements
 * of a dlistint_t List.
 *
 * @h: Head of the List.
 * Return: Number of Nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
