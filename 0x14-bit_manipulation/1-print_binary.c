#include "main.h"

/**
 * print_binary - This prints binary equivalnt of a dec. numbr.
 * @n: Numbr to print in binary .
 *
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int currnt;

	for (k = 63; k >= 0; k--)
	{
		currnt = n >> k;

		if (currnt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
