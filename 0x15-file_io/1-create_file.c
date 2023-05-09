#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - the function creates a new file with rw------- permissions
 * @filename: The name of the file
 * @text_content: content to write on the file
 *
 * Return: 1 on sucess -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	unsigned int len = 0, i;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			len++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (wr == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
