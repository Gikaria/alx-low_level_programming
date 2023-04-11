#include "main.h"
/**
 * @s: the character to print
 * _puts- the function to print the character
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	_putchar('\n');
}

