#include "main.h"
/**
 * print_triangle - prints the triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int a, f;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (f = size - a; f > 0; f--)
				_putchar(' ');

			for (f = 0; f < a; f++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
