#include "lists.h"

/****** Task eight, 8-sum_listint.c ******/

/**
 * sum_listint - Function which cal sum of all
 * data in listint_t list.
 * @head: The first node in linked list.
 *
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
	int sum_all = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum_all += tempo->n;
		tempo = tempo->next;
	}

	return (sum_all);
}
