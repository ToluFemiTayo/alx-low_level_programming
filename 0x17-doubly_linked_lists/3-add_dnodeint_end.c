#include "lists.h"

/**
 * add_dnodeint_end - Fuctn adds new node at the end
 * of a dlistint_t List.
 *
 * @head: Head of the List.
 * @n: Value of the Element.
 * Return: Address of the New Element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
