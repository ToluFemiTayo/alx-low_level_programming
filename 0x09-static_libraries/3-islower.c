#include "main.h"

/**
 * _islower - function that checks for lowercase letters
 * @c: characteers to check
 *
 * Return: 1 if c is a lowercase, else, 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
