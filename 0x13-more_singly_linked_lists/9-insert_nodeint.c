#include "lists.h"

/****** Task nine, 9-insert_nodeint.c ******/

/**
 * insert_nodeint_at_index - Functn that inserts a new node
 * in a linked list at a particular position.
 * @head: The pointer to first node in the list.
 * @idx: The index where new node is added.
 * @n: The data to insert in new node.
 *
 * Return: The pointer to new node, else, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *newnod;
	listint_t *tempo = *head;

	newnod = malloc(sizeof(listint_t));
	if (!newnod || !head)
		return (NULL);

	newnod->n = n;
	newnod->next = NULL;

	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
		return (newnod);
	}

	for (y = 0; tempo && y < idx; y++)
	{
		if (y == idx - 1)
		{
			newnod->next = tempo->next;
			tempo->next = newnod;
			return (newnod);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
