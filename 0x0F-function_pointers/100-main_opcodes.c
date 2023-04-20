#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count of the program
 * @argv: arguments vector of the program
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	unsigned char cd;
	int bytes;
	int j;
	int (*print_opcodes)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < bytes; j++)
	{
		cd = *(unsigned char *)print_opcodes;
		printf("%.2x", cd);

		if (j == bytes - 1)
			continue;
		printf(" ");

		print_opcodes++;
	}
	printf("\n");
	return (0);
}
