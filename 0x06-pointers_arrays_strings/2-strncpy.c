#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: The first string
 * @src: the second string
 * @n: the number of times to copy a string
 * Return: dest sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];

	for (; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
