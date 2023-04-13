#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to newy allocated memory space
 * @str: the pointer to return to new memory space.
 * Return: str  success
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str != NULL)
	{
	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
	{
		exit(0);
	}
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	}
	exit(0);
}
