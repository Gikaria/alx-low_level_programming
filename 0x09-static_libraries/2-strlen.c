#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: The string
 * Return: i the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
