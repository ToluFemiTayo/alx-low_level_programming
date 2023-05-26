#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Fnctn which creates an arr of ints.
 * @min: The min range of values stored.
 * @max: The max range of values stored,
 * and numbr of elmnts.
 *
 * Return: Pointr to the new arr.
 */
int *array_range(int min, int max)
{
	int *pointr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointr = malloc(sizeof(int) * size);

	if (pointr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pointr[j] = min++;

	return (pointr);
}
