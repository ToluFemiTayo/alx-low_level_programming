#include "lists.h"

/****** Task six, 6-pop_listint.c ******/

/**
 * pop_listint - Function which del head node of a linked list.
 * @head: The pointr to the first elmt in the linked list.
 *
 * Return: The deleted data in the elmts,
 * else, 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int numbr;

	if (!head || !*head)
		return (0);

	numbr = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (numbr);
}
