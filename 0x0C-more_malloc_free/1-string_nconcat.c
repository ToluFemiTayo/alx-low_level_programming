#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Fnctn which conctntes n bytes,
 * of a str to another str.
 * @s1: Str to be appended.
 * @s2: Str to be conctnated from.
 * @n: Numbr of bytes from s2 to conc to s1.
 *
 * Return: Pointr to the resulting str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0, k = 0, lent1 = 0, lent2 = 0;

	while (s1 && s1[lent1])
		lent1++;
	while (s2 && s2[lent2])
		lent2++;

	if (n < lent2)
		s = malloc(sizeof(char) * (lent1 + n + 1));
	else
		s = malloc(sizeof(char) * (lent1 + lent2 + 1));

	if (!s)
		return (NULL);

	while (j < lent1)
	{
		s[j] = s1[j];
		j++;
	}

	while (n < lent2 && j < (lent1 + n))
		s[j++] = s2[k++];

	while (n >= lent2 && j < (lent1 + lent2))
		s[j++] = s2[k++];

	s[j] = '\0';

	return (s);
}
