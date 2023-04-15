#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: commandline arguments
 * @argv: commandline arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	mult = atoi(argv[1]) * atoi(argv[1 + 1]);
	printf("%d\n", mult);
	return (0);
}
