#include "main.h"

/****** Task six, 100-get_endianness.c ******/

/**
 * get_endianness - Functn which checks if a machine,
 * is a little or a big endian.
 * Return: 0 (big), 1 (little).
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
