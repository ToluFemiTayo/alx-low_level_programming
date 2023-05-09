#include "main.h"

/****** Task One, 1-create_file.c ******/

/**
 * create_file - Fnctn Creates a File...
 * @filename: The pointr to name of file to be Creatd...
 * @text_content: The pointr to str to write to the file...
 *
 * Return: -1 (On failure), else, 1 (Success)...
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fd, text_content, lengt);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
