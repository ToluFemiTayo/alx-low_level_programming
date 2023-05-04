#include "lists.h"
#include <stdio.h>

/****** Task twelve, 101-print_listint_safe.c ******/

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Functn counts num of unique nodes,
 * found in a looped listint_t linked list.
 * @head: The pointr to the head of listint_t to be checked.
 *
 * Return: 0 if list is not looped,
 * else, num of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *rabbit;
	size_t _nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (turtle == rabbit)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				_nodes++;
				turtle = turtle->next;
				rabbit = rabbit->next;
			}

			turtle = turtle->next;
			while (turtle != rabbit)
			{
				_nodes++;
				turtle = turtle->next;
			}

			return (_nodes);
		}

		turtle = turtle->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Functn prints listint_t list safely.
 * @head: The pointr to head of listint_t list.
 *
 * Return: Numbr of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t _nodes, _index = 0;

	_nodes = looped_listint_len(head);

	if (_nodes == 0)
	{
		for (; head != NULL; _nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (_index = 0; _index < _nodes; _index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (_nodes);
}
