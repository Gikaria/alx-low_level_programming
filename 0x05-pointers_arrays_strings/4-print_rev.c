#include "main.h"
#include <string.h>
/**
 * print_rev - print the string in reverse
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int len = 0, i;
	
	while (s[i++])
	{
		len++;
	}
	s[i--];
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		s[i--];
	}
	_putchar('\n');
}
