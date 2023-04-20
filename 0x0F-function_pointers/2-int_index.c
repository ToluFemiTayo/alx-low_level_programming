#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true, else -1
 * @array: array
 * @size: size of element in array
 * @cmp: pointer to the func to be used to compare values
 *
 * Return: index, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
