#include "main.h"
/**
 * @s: string one
 * @accept: string two
 * _strspn- The function
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix = 0;
	int c;
	char *p;

	p = accept;
	while (*s)
	{
		for (c = 0; p[c]; c++)
		{
			if (*s == p[c])
			{
				prefix++;
				break;
			}

			else if (p[c + 1] == '\0')
				return (prefix);
		}
		s++;
	}
	return (prefix);
}

