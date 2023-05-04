#include "main.h"

/****** Task 0, 0-binary_to_uint.c ******/

/**
 * binary_to_uint - Functn converts a binary numbr to unsigned int.
 * @b: The str containing the binary numbr.
 *
 * Return: The converted numbr is retrnd.
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[y] - '0');
	}

	return (dec_val);
}
