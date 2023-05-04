#include "main.h"

/****** Task 1, 1-print_binary.c ******/

/**
 * print_binary - Functn which prints the binary,
 * equivalent of a dec numbr.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int y, _count = 0;
	unsigned long int _curent;

	for (y = 63; y >= 0; y--)
	{
		_curent = n >> y;

		if (_curent & 1)
		{
			_putchar('1');
			_count++;
		}
		else if (_count)
			_putchar('0');
	}
	if (!_count)
		_putchar('0');
}
