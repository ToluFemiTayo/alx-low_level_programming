#include "main.h"

/**
 * clear_bit - This fuctn sets valu of givn bit to 0.
 * @n: The pointr to numbr to be changd.
 * @index: The index of bit to clear.
 *
 * Return: 1(on Success), -1(if Failed).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
