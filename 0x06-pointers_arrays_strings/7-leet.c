#include "main.h"
/**
 * leet- encode characters into 1337
 * @s: the string to encode
 * Return: s (succcess)
 */
char *leet(char *s)
{
	int i, c;
	char leetno[] = "4433007711";
	char leetch[] = "aAeEoOtTlL";

	i = 0;
	while (s[i] != '\0')
	{
		c = 0;
		while (c < 10)
		{
			if (leetch[c] == s[i])
			{
				s[i] = leetno[c];
			}
			c++;
		}
		i++;
	}
	return (s);
}
