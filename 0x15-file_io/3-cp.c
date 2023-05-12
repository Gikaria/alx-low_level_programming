#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define MAXSIZE 1024

void close_file(ssize_t pd);
/**
 * close_file  - The functions closes a file
 * @pd: the file to close
 */

void close_file(ssize_t pd)
{
	ssize_t state;

	state = close(pd);
	if (state == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", pd);
		exit(100);
	}
}

/**
 * main - The function copys contents from one file to another
 * @argc: number of arguments in the statement
 * @argv: positions of each argument
 * Return: 0 on sucess -1 on failure
 */
int main(int argc, char *argv[])
{
	char buffer[MAXSIZE];
	ssize_t file_in, file_out, r_p, w_p;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file to\n", argv[0]);
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	if (!file_in)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close_file(file_in);
		exit(98);
	}

	file_out = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT | 0664);
	if (!file_out)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_file(file_in);
		exit(99);
	}
	r_p = sizeof(buffer);

	while (r_p == 1024)
	{
		r_p = read(file_in, buffer, sizeof(buffer));
		if (!r_p)
			break;
		if (r_p == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close_file(file_out);
			close_file(file_in);
			exit(98);
		}
		w_p = write(file_out, buffer, r_p);
		if (w_p == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close_file(file_out);
			close_file(file_in);
			exit(99);
		}

	}
	close(file_in);
	close(file_out);

	return (0);
}
