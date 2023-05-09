#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/****** Task Three, 3-cp.c ******/

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Fnctn Allocates 1024 Bytes for Buffer.
 * @file: The Name of File Buffer is Storing Chars for.
 *
 * Return: Pointr to Newly-allocated Buffer.
 */
char *create_buffer(char *file)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024);

	if (bufr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufr);
}

/**
 * close_file - Fnctn Closes File Descriptors.
 * @fd: The File Descriptr to Close.
 */
void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Fnctn Copies Contents of File to another File.
 * @argc: The numbr of args Supplied to the Program.
 * @argv: An arr of pointrs to args.
 *
 * Return: 0 (Success).
 *
 * Description: If arg count is incorrect, exit code 97.
 *	file_from does not exist or cannot be read, exit code 98.
 *	file_to cannot be created or written to, exit code 99.
 *	file_to or file_from cannot be closed, exit code 100.
 */
int main(int argc, char *argv[])
{
	int from_s, to_d, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_s = open(argv[1], O_RDONLY);
	rd = read(from_s, buffer, 1024);
	to_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_s == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(to_d, buffer, rd);
		if (to_d == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from_s, buffer, 1024);
		to_d = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from_s);
	close_file(to_d);

	return (0);
}
