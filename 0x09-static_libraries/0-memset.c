#include "main.h"
/**
 * _memset - Fills the memory with a constant byte
 * @s: address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: Memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
