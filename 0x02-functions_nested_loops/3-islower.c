#include "main.h"
/**
 * _islower -  Checks for lowercase letters
 * @c: checked characters
 * Return: 1 lowercase characters
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
