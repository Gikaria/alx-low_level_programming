#include "main.h"
/**
 * _puts- print out a string
 * @str: the string to print out
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
