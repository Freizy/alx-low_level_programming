#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Pointer to the file name.
 * @text_content: Pointer to the string.
 * Return: -1 if the function fails, else 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, x;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
		x++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0000);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
