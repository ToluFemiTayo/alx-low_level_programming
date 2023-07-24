#include "main.h"

/**
 * binary_to_uint - This fnctn converts binary numbr to unsigned int
 * @b: str containing binary numbr.
 *
 * Return: Converted numbr.
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_valu = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_valu = 2 * dec_valu + (b[k] - '0');
	}

	return (dec_valu);
}
