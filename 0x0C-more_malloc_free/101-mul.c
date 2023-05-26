#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Fnctn which checks if a str,
 * contains a non-digit charctr.
 * @s: The str to be evaluated.
 *
 * Return: 0 (if a non-digit is found), else, 1.
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - Fnctn which returns the len of a str.
 * @s: The str to be evaluated.
 *
 * Return: Length of the str.
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - Fnctn which handles errors for main.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Fnctn which multiplies two +ve numbrs.
 * @argc: The numbr of args.
 * @argv: The arr of args.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lent1, lent2, lent, j, carry, digit1, digit2, *result, k = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lent1 = _strlen(s1);
	lent2 = _strlen(s2);
	lent = lent1 + lent2 + 1;
	result = malloc(sizeof(int) * lent);
	if (!result)
		return (1);
	for (j = 0; j <= lent1 + lent2; j++)
		result[j] = 0;
	for (lent1 = lent1 - 1; lent1 >= 0; lent1--)
	{
		digit1 = s1[lent1] - '0';
		carry = 0;
		for (lent2 = _strlen(s2) - 1; lent2 >= 0; lent2--)
		{
			digit2 = s2[lent2] - '0';
			carry += result[lent1 + lent2 + 1] + (digit1 * digit2);
			result[lent1 + lent2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lent1 + lent2 + 1] += carry;
	}
	for (j = 0; j < lent - 1; j++)
	{
		if (result[j])
			k = 1;
		if (k)
			_putchar(result[j] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
