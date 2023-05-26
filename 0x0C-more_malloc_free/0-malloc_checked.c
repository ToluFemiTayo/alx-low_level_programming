#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Fuctn which allocates memory using malloc.
 * @b: Numbr of bytes to be allocated.
 *
 * Return: Pointr to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *pointr;

	pointr = malloc(b);

	if (pointr == NULL)
		exit(98);

	return (pointr);
}

