#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This Fuctn reads text File nd prints to STDOUT.
 * @filename: The Text File being read.
 * @letters: The Numbr of Letters to read.
 *
 * Return: w, Actual Numbr of bytes read nd printd.
 *        0, Either Fuctn fails or Filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
