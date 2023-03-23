#include "main.h"
/**
 * _isdigit -function that checks for digits
 * @c: character to be checked
 * Return: 0 Success
 */
int _isdigit(int c)
{
	if ((c >= (0 + '0')) && (c <= (9 + '0')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
