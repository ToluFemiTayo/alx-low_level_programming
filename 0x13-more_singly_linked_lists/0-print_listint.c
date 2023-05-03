#include "lists.h"

/**
 * print_listint - Function to print all elements of a linked list.
 * @h: The linked list of type listint_t to be printed.
 *
 * Return: The number of nodes is returned.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
