#include <stdio.h>
/**
 * main - Entry point
 * description: print out lowercase alphabets in reverse
 * Return: 0 always (Success)
 */
int main(void)
{
	int a = 122;

	do {
		putchar(a);
		a--;
	} while (a >= 97);
	putchar('\n');
	return (0);
}
