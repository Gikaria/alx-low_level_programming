#include "main.h"
/**
 * more_numbers - print numbers between 0 and 14 ten times
 */
void more_numbers(void)
{
	int a, n;

	for (a = 0; a <= 9; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
