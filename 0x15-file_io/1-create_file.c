#include "main.h"

/**
 * create_file - Creates a file with specified content and permissions.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, o, w;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
