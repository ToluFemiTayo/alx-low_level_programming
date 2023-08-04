#include "main.h"

/**
 * get_endianness - This Fuctn checks if a machine,
 * is Little or Big endian.
 *
 * Return: 0(if Big), 1(if Little).
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
