#include "lists.h"

/****** Task eleven, 100-reverse_listint.c ******/

/**
 * reverse_listint - A functn which reverses a linked list.
 * @head: The pointer to the first node in,
 * the list which is to be reversed.
 *
 * Return: The pointr to first node in new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *_prevs = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = _prevs;
		_prevs = *head;
		*head = next;
	}

	*head = _prevs;

	return (*head);
}
