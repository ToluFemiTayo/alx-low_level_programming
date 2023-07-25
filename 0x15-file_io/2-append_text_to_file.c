#include "main.h"

/**
 * append_text_to_file - This appends text at the end of file.
 * @filename: The pointr to the name of file.
 * @text_content: The str added to the end of file.
 *
 * Return: -1, if fails or filename is NULL and,
 *         if file not exist, the user lacks write permissions.
 *         1 if otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lengt);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
