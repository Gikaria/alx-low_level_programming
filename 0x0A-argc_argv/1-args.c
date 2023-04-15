#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 * @argc: command line arguments
 * @argv: command lien arguments
 * Return: 0 (Always success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
