#include "lists.h"

/****** Task two, 2-add_nodeint.c ******/

/**
 * add_nodeint - Function that adds a new node
 * at the beginning of a linked list.
 * @head: The pointer to the first node in the list.
 * @n: The data to be inserted in that new node.
 *
 * Return: The pointer to the new node, otherwise, NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	newnod = malloc(sizeof(listint_t));
	if (!newnod)
		return (NULL);

	newnod->n = n;
	newnod->next = *head;
	*head = newnod;

	return (newnod);
}
