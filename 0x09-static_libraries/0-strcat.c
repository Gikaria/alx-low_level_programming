#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: The first string
 * @src: the second string
 * Return: dest (success)
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++, len++)
		dest[len] = src[i];

	dest[len] = '\0';
	return (dest);
}
