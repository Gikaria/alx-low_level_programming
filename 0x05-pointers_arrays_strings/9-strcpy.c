#include "main.h"
/**
 * _strcpy - copiies string form one pointer to another
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * Return: dest success
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[i++])
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
