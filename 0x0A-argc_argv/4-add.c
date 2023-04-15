#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_integer- check whether value enter is integer
 * @a: The string to check
 * Return: 0 0r i on success execution
 */
int is_integer(const char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] < '0' || a[b] > '9')
			return (1);
	}
	return (0);
}

/**
 * main- Entry point
 * @argc: number of commandline arguments
 * @argv:index point of commandline arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, a = 0;

	if (argc < 0)
	{
		printf("%d\n", a);
	}
	while (--argc)
	{
		if (is_integer(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
