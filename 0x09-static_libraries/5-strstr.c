#include "main.h"
/**
 * _strstr - locates a substring in haystack
 * @haystack: the string to be scanned
 * @needle: The strig to check for similar substring
 * Return: if sucess or null if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!(*needle == 0))
	{
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);

			i++;

		}
		haystack++;
	}
	return ('\0');
	}
	return (haystack);
}
