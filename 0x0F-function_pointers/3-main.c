#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that calls on the operators
 * @argv: array of pointers
 * @argc: number of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	 a = atoi(argv[1]);
	 b = atoi(argv[3]);
	 c = argv[2];

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/'  && b == 0) || (*c == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
