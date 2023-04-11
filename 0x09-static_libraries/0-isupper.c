#include "main.h"
/**
 * _isupper - functions thta checsks for uppercase letters
 * @c: character under check-up
 * Return: 0 success
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
