#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to search
 * Return: s if sucess ,'\0'if not
 */
char *_strchr(char *s, char c)
{
	int n;

	n = 0;
	while (s[n] >= '\0')
	{
		if (s[n] == c)
			return (s + n);

		n++;
	}
	return ('\0');
}
