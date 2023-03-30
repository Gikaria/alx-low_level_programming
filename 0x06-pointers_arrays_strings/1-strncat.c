#include "main.h"
/**
 * _strncat - concatenates two strings at certain n bytes
 * @dest: the first string
 * @src: the second string
 * @n: n bytes
 * Return: dest success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
		i++;

	for (len = 0; len < n && src[len] != '\0'; len++, i++)
	{
		dest[i] = src[len];
	}
	dest[i] = '\0';
	return (dest);
}
