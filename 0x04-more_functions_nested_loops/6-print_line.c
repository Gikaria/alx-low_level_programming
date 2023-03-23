#include "main.h"
/**
 * print_line - prints straight line in terminal
 * @n: number of timesto print the line
 */
void print_line(int n)
{
	int s;

	if (n > 0)
	{
	for (s = 0; s < n; s++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
