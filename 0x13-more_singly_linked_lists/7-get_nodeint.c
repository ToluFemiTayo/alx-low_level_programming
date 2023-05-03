#include "lists.h"

/****** Task seven, 7-get_nodeint.c ******/

/**
 * get_nodeint_at_index - Function that returns node,
 * at a particular index in a linked list.
 * @head: The first node in linked list.
 * @index: The index of node to return.
 *
 * Return: The pointer to the particular node, else, NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *tempo = head;

	while (tempo && y < index)
	{
		tempo = tempo->next;
		y++;
	}

	return (tempo ? tempo : NULL);
}
