#include "main.h"
/**
 * append_text_to_file - Append text to the end of a file
 * @filename: Points to file
 * @text_content: The string to e added
 * Return: 1 if succss and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc;
	int letterno;
	ssize_t o;

	filedesc = open(filename, O_WRONLY | O_APPEND);
	if (filedesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		letterno = 0;
		while (text_content[letterno])
			letterno++;

		o = write(filedesc, text_content, letterno);

		if (o == -1)
			return (-1);
	}
	close(filedesc);

	return (1);
}
