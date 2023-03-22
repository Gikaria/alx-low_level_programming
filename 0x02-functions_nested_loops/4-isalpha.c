#include "main.h"
/**
 * _isalpha -checks whether character c is upper case or lower case
 * @c: checker whether it is upper cased or lower cased
 * Return: 1 if c is lower or upper case
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
