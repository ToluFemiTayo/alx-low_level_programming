#include "lists.h"

/****** Task thirteen, 102-free_listint_safe.c ******/

/**
 * free_listint_safe - Funtn which frees a linked list.
 * @h: The pointr to the frst node in linked list.
 *
 * Return: Numbr of elmnts in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int _diff;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		_diff = *h - (*h)->next;
		if (_diff > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}
