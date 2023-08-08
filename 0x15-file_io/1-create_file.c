#include "main.h"

/**
 * create_file - This Fuctn Creates a File.
 * @filename: The Pointr to the name of Creatd File.
 * @text_content: The Pointr to str to write to the File.
 *
 * Return: -1 (if Fails), 1 (if Otherwise).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, lengt);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
