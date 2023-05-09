#include "main.h"

/****** Task Two, 2-append_text_to_file.c ******/

/**
 * append_text_to_file - Fnctn Appends text at end of File...
 * @filename: The pointr to Name of the File...
 * @text_content: The Str to add to the end of File...
 *
 * Return: -1 (On failure or NULL), else, 1 (file exit)
 *         -1 (file does not exist, user has no write permissions)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, lengt);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
