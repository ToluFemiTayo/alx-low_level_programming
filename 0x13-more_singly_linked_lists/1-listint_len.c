#include "lists.h"

/****** Task one, 1-listint_len.c  ******/

/**
 * listint_len - Function returned num of elmnts in a linked lists.
 * @h: The linked list of type listint_t to be traversed.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t numbr = 0;

	while (h)
	{
		numbr++;
		h = h->next;
	}

	return (numbr);
}

