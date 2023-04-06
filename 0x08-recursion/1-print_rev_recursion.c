#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: The string to be printed
 *
 * Return: 0.
 */
void _print_rev_recursion(*s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
