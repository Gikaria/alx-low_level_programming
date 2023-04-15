#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: commandline arguments
 * Return: 0 (Always success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
