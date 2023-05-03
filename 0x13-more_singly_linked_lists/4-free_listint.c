#include "lists.h"

/****** Task four, 4-free_listint.c  ******/

/**
 * free_listint - A function which frees a linked list.
 *
 * @head: The listint_t list to free.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
