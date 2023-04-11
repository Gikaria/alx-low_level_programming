#include "main.h"
/**
 * _memcpy - copy string from one buffer to another
 * @dest: first string
 * @src: second string
 * @n: length of the string
 * Return: dest new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
