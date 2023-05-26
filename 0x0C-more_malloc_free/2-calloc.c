#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fnctn which fills memory with a constant byte.
 * @s: Memory area to be filled.
 * @b: Char to be copied.
 * @n: Numbr of times to copy b.
 *
 * Return: Pointr to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - Fnctn which allocates memory for an arr.
 * @nmemb: The numbr of elmnts in the arr.
 * @size: The size of each elmnt.
 *
 * Return: Pointr to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointr = malloc(size * nmemb);

	if (pointr == NULL)
		return (NULL);

	_memset(pointr, 0, nmemb * size);

	return (pointr);
}
