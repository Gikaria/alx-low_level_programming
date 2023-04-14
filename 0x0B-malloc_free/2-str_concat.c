#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer containing contents of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	unsigned int i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2) + 1;
	ptr_str = malloc(strlen(s1) * sizeof(char));
	ptr_str = realloc(ptr_str, strlen(s2) + 1 * sizeof(char));
	if (ptr_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr_str[i] = s1[i];
	}
	for (i = 0; i < strlen(s2); i++)
	{
		ptr_str[strlen(s1) + i] = s2[i];
	}
	ptr_str[size - 1] = '\0';
	return (ptr_str);
}
