#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * read_textfile - the function reads text file and
 * prints it to POSTFIX stdout
 *
 * @filename: Name of the file
 * @letters: characters in the file
 *
 * Return: Actual number of letters 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rb, wb;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	rb = read(fd, buff, letters);
	wb = write(STDOUT_FILENO, buff, rb);

	close(fd);
	free(buff);

	if (wb == -1 || wb != rb || fd == -1 || rb == -1)
		return (0);

	return (wb);
}
