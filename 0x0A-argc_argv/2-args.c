#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commandline arguments
 * @argv: command line arguments
 * Return: 0 (always success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
