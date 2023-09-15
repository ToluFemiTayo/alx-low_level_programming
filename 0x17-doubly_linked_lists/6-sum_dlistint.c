#include "lists.h"

/**
 * sum_dlistint - Fuctn returns the sum of all the data (n)
 * of doubly linked List.
 *
 * @head: Head of the List.
 * Return: Sum of the Data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
