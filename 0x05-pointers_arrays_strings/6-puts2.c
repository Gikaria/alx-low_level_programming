#include "main.h"
/**
 * puts2 - function that prints every other character
 * @str: string to print out every other character
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
