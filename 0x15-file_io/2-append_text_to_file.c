#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - The function appends text at the end of the file
 * @filename: name of the file
 * @text_content: text to append at the end of the file
 *
 * Return: 1 on success -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int len = 0, i;
	ssize_t op, wr;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;
	}

	op = open(filename, O_RDWR | O_APPEND);
	wr = write(op, text_content, len);

	close(op);
	if (op == -1 || wr == -1)
		return (-1);

	return (1);
}
