#include "main.h"
/**
 * create_file - create a file and copy
 * @filename: The filename to be created
 * @text_content: Content to be copied
 * Return: 1 if success -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc;
	int letterno;
	int w;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		for (letterno = 0; text_content[letterno];)
			letterno++:
	}

	filedesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filedesc, text_content, letterno);

	if (w == -1)
		return (-1);
	close(filedesc);

	return (1);
}

