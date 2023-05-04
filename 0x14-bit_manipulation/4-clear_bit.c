#include "main.h"

/****** Task four, 4-clear_bit.c ******/

/**
 * clear_bit - Functn which sets the value of a particular bit to 0.
 * @n: The pointr to the numbr to be changed.
 * @index: The index of bit to be cleared.
 *
 * Return: 1 (Success), else, -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
