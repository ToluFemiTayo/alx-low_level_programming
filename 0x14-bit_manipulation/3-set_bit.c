#include "main.h"

/****** Task 3, 3-set_bit.c ******/

/**
 * set_bit - Functn which sets a bit at a particular index to 1.
 * @n: The pointr to the numbr to be changed.
 * @index: The index of bit to set to 1.
 *
 * Return: 1(Success), else, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
