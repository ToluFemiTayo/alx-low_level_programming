#include "main.h"

/****** Task 0, 2-get_bit.c ******/

/**
 * get_bit - Functn returns value of a bit,
 * at an index in a deci numbr.
 * @n: Numbr to be searched.
 * @index: The index of the bit.
 *
 * Return: The value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index > 63)
		return (-1);

	val_of_bit = (n >> index) & 1;

	return (val_of_bit);
}
