#include <stdio.h>
#include <unistd.h>

/**
 * main - A c program that prints a line to the standard error
 *
 * Return: 1 (error)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	write(1, quo, 58);
	return (1);
}
