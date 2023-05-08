#include "main.h"
#include <stdlib.h>

/****** Task 0, 0-read_textfile.c ******/

/**
 * read_textfile- Fnctn reads text file and print to STDOUT.
 * @filename: The text file to be read.
 * @letters: The numbr of letters being read.
 * Return: w - the actual numbr of bytes read nd printed,
 *        0 - when fnctn fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t l;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(fd);
	return (w);
}
