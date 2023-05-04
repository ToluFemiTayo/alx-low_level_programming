#include "lists.h"

/****** Task ten, 10-delete_nodeint.c ******/

/**
 * delete_nodeint_at_index - Funtn that del a node in,
 * a linked list at a particular index.
 * @head: The pointr to the first elmt in the list.
 * @index: The index of node to be deleted.
 *
 * Return: 1 On success, else, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *_currnt = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (y < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		y++;
	}


	_currnt = tempo->next;
	tempo->next = _currnt->next;
	free(_currnt);

	return (1);
}
