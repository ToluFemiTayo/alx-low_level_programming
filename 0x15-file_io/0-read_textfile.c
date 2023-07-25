#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This reads text file and prints to STDOUT.
 * @filename: The text file being read.
 * @letters: The numbr of letters to read.
 *
 * Return: w - the actual numbr of bytes read nd printd.
 *        0 either the function fails or filename is NULL.
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
