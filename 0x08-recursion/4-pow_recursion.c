#include "main.h"
/**
 * _pow_recursion - returns y raised to power x
 * @x: base number
 * @y: rasing factor
 * Return: power of the x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	if (y == 1)
		return (x);


	return(x * _pow_recursion(x, y));
}
