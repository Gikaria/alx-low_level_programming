#include "main.h"
/**
 * _memcpy - copies the memory areas from src to dest
 * @dest: copy memory to
 * @src: copy memory from
 * @n: number of bytes to copy
 * Return: pointer dest
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
