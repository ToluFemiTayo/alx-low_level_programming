#include "lists.h"

/****** Task five, 5-free_listint2.c  ******/

/**
 * free_listint2 - A function which frees a linked list.
 *
 * @head: The pointer to the listint_t list to free.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;

	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}

	*head = NULL;
}
