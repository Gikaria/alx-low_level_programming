#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len, middle;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	middle = len / 2;
	if ((len % 2) == 1)
		middle++;

	while (middle < len)
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
