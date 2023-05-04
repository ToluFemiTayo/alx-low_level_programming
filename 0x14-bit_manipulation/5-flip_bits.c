#include "main.h"

/****** Task five, 5-flip_bits.c ******/

/**
 * flip_bits - Functn which counts the numbr of bits to be changed
 * to get from one numbr to another one.
 * @n: The first numbr.
 * @m: The second numbr.
 *
 * Return: The numbr of bits to change...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int _curent;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		_curent = exclusive >> y;
		if (_curent & 1)
			count++;
	}

	return (count);
}
