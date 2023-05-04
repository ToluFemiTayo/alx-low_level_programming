#include "lists.h"

/****** Task fourteen, 103-find_loop.c ******/

/**
 * find_listint_loop - Functn finds the loop in linked list.
 * @head: The linked list to be Searched.
 *
 * Return: Address of node where loop starts, else, NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *_slow = head;
	listint_t *_quick = head;

	if (!head)
		return (NULL);

	while (_slow && _quick && _quick->next)
	{
		_quick = _quick->next->next;
		_slow = _slow->next;
		if (_quick == _slow)
		{
			_slow = head;
			while (_slow != _quick)
			{
				_slow = _slow->next;
				_quick = _quick->next;
			}
			return (_quick);
		}
	}

	return (NULL);
}
