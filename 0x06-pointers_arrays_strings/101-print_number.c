#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer parameters
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	nl = n;

	if (n < 0)
	{
		_putchar('-');
		nl = -n;
	}
	if (nl / 10 != 0)
	{
		print_number(nl / 10);
	}
	_putchar((n1 % 10) + '0');
}
