#include "main.h"
#include <stdlib.h>
/**
 * _abs - function for abs value
 * @c: integer to computer absolute value for
 * main code: prints out absolute value of an integer
 * Return: c for non negative values
 */
int _abs(int c)
{

	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	else
	{
		return (c);
	}
}
