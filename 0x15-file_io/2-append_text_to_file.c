#include "main.h"

/**
 * append_text_to_file - This Appends text at End of File.
 * @filename: The Pointr to the Name of File.
 * @text_content: The str Added to the End of File.
 *
 * Return: -1, if Fails or Filename is NULL,
 *         if File not Exist, the user lacks Write Permissions.
 *         1 if Otherwise.
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
