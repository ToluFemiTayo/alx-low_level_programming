#include "main.h"

/**
 * get_bit - This returns value of bit at an index in a dec numbr.
 * @n: The numbr to search.
 * @index: The index of the bit.
 *
 * Return: Value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
