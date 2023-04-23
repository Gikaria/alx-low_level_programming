#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function thta returns pointer to concatenated string
 * @s1: first string
 * @s2: second string
 * @n: bytes of the second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_1 = 0, size_2 = 0, total_size = 0, j;
	char *str;

	if (s1 != NULL)
	{
		while (s1[size_1] != '\0')
			size_1++;
	}
	if (s2 != NULL)
	{
		while (s2[size_2] != '\0')
			size_2++;
	}
	if (n >= size_2)
		n = size_2;

	total_size += size_1 + n + 1;
	str = malloc((total_size) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size_1; j++)
	{
		str[j] = s1[j];
	}
	for (j = 0; j < (size_1 + n); j++)
	{
		str[size_1 + j] = s2[j];
	}
	str[j] = '\0';
	return (str);
}



