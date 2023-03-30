#include "main.h"
/**
 *
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int index = 0;

	while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;

	if (str[index - 1] == ' ' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||)
}
