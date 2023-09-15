#include "lists.h"

/**
 * free_dlistint - Fuctn frees a dlistint_t List.
 * @head: Pointer to head of the List.
 * Return: Return Nothing.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
