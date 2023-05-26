#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Fnctn which reallocates a memory block,
 * by using malloc and free.
 * @ptr: Pointr to memory, previsouly allocated by malloc.
 * @old_size: The size of the allocated memory for pointr.
 * @new_size: The new size of the new memory block.
 *
 * Return: Pointr to newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointr1;
	char *old_pointr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointr1 = malloc(new_size);
	if (!pointr1)
		return (NULL);

	old_pointr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			pointr1[j] = old_pointr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			pointr1[j] = old_pointr[j];
	}

	free(ptr);
	return (pointr1);
}
