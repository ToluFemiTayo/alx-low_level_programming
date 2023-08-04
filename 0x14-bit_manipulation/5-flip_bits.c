#include "main.h"

/**
 * flip_bits - This counts Numbr of bits to be changd,
 * to get from one Numbr to another.
 * @n: The First Numbr.
 * @m: The Second Numbr
 *
 * Return: The Numbr of bits to be Changd
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int curnt;
	unsigned long int exclusv = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		curnt = exclusv >> k;
		if (curnt & 1)
			count++;
	}

	return (count);
}
