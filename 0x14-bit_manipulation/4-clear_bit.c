#include "main.h"

/**
 * clear_bit - This sets value of given bit to 0.
 * @n: The pointr to the numbr to be changed.
 * @index: The index of the bit to clear.
 *
 * Return: 1 (on success), -1 (if failed).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
