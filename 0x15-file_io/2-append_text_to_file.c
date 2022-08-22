#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr = write(d, text_content, num_letters);

		if (rwr == -1)
			return (-1);
	}

	close(d);

	return (1);
}
