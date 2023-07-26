#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This allocates 1024 byts for a buffr.
 * @file: Name of file buffr is storng chars for.
 *
 * Return: The pointr to newly-allocated buffr.
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
 * close_file - This closes file descriptrs.
 * @fd: File descriptr to be closed.
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
 * main - This copies contents of file to another.
 * @argc: Numbr of argmts supplied to program.
 * @argv: Arr of pointrs to argmts.
 *
 * Return: 0 (on success).
 *
 * Description: If argmt count is incorrect,then exit code 97.
 * file_from does not exist or cannot be read,then exit code 98.
 * file_to cannot be created or written to,then exit code 99.
 * file_to or file_from cannot be closed,then exit code 100.
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
