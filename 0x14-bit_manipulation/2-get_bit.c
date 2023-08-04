#include "main.h"

/**
 * get_bit - This retrns valu of bit at an index in a dec. numbr.
 * @n: The numbr to search for.
 * @index: The index of bit.
 *
 * Return: Value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
