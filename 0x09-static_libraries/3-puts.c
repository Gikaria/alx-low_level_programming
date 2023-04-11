#include "main.h"
/**
 * _puts - The function to print string s
 * @s: the string to be printed
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

