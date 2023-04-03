#include "main.h"
/**
 * _strpbrk - searches for any set of bytes between s and accept
 * @s: the string suspected to have similar bytes with accept
 * @accept: the string suspected to have similar bytes with s
 * Return: s  or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);	
		s++;
	}
	return ('\0');
}
