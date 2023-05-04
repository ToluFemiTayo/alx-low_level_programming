#include "main.h"
#include <unistd.h>

/****** _putchar File ******/

/**
 * _putchar - The functn writes the charctr c to stdout.
 * @c: The charctr to be printed.
 *
 * Return: 1 (Success),
 * Else, -1 (Error), and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
