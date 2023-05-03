#include "lists.h"

/****** Tasks three, 3-add_nodeint_end.c ******/

/**
 * add_nodeint_end - Function that adds a node
 * at the end of a linked list.
 * @head: The pointer to the first element in the list.
 * @n: The data to be inserted in the new element.
 *
 * Return: The pointer to the new node, otherwise, NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnod;
	listint_t *tempo = *head;

	newnod = malloc(sizeof(listint_t));
	if (!newnod)
		return (NULL);

	newnod->n = n;
	newnod->next = NULL;

	if (*head == NULL)
	{
		*head = newnod;
		return (newnod);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = newnod;

	return (newnod);
}
