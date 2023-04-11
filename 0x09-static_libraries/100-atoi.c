#include "main.h"
/**
 * _atoi - change character string to integer
 * @s: the string to convert to integer
 * Return: if success.
 */
int _atoi(char *s)
{
	int i, result;

	result = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		result = result * 10 +  s[i] - '0';
	}
	return (result);
}

