#include "main.h"
#include <stdlib.h>
unsigned int _atoi(char d);
unsigned int _strlen(const char *a);

/**
 * binary_to_uint - The functions converts binary number to unsigned integer.
 * @b: Character pointer to binary number '0' or '1'.
 *
 * Return: unsigned int or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	unsigned int num, j;

	if (!b)
		return (0);

	for (j = 0; j < _strlen(b); j++)
	{
		num = _atoi(b[j]);

		if (num != 0 && num != 1)
			return (0);
	}
	for (j = 0; j < _strlen(b); j++)
	{
		num = _atoi(b[j]);
		k = k * 2 + num;
	}
	return (k);
}

/**
 * _strlen - finds the length of a string
 * @a: the string
 *
 * Return: the length of the string
 */
unsigned int _strlen(const char *a)
{
	unsigned int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _atoi - converts charcter to an integer
 * @d: character to convert
 *
 * Return: an integer
 */
unsigned int _atoi(char d)
{
	return ((unsigned int) d - '0');
}
