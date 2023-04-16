#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: strings
 * @accept: set of bytes
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
