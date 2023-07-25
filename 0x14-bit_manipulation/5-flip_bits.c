#include "main.h"

/**
 * flip_bits - This counts numbr of bits to be changed to
 * get from one numbr to another.
 * @n: The first numbr.
 * @m: The second numbr.
 *
 * Return: The numbr of bits to be changed.
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
