#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This Fuctn Allocates 1024 byts for Buffr.
 * @file: Name of File Buffr is storng Chars for.
 *
 * Return: The Pointr to newly-allocated Buffr.
 */
char *create_buffer(char *file)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);

	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffr);
}

/**
 * close_file - This Fuctn closes File Descriptrs.
 * @fd: File Descriptr to be Closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This Fuctn Copies contents of File to Another.
 * @argc: Numbr of Argmts Supplied to program.
 * @argv: Arr of Pointrs to Argmts.
 *
 * Return: 0(on Success).
 *
 * Description: If Argmt count is Incorrect,Then exit code 97.
 * file_from does not Exist or cannot be Read,Then exit code 98.
 * file_to cannot be Creatd or Written to,Then exit code 99.
 * file_to or file_from cannot be Closed,Then exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}

		w = write(to, buffr, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}

		r = read(from, buffr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffr);
	close_file(from);
	close_file(to);

	return (0);
}
