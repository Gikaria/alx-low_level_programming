#include "main.h"
/**
 * _strchr- checks for charcter c in string s
 * @c: character to check
 * @s: string to check
 * Return: The string carrying the character
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
