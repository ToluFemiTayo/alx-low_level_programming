#include "main.h"

/**
 * set_bit - This sets bit at given index to 1.
 * @n: The pointr to numbr to be changed.
 * @index: The index of bit to set to 1.
 *
 * Return: 1(on Success), -1(if Failed).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
