#include "main.h"
/**
 * print_numbers - print numbers ebtween 0 and 9
 */
void print_numbers(void)
{
	int c;

	for (c = (0 + '0'); c <= (9 +'0'); c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
