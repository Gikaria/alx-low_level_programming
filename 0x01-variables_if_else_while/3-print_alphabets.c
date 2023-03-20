#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print out lower and uppercase alphabets'
 * Return:0 always success
 */
int main(void)
{
	int n = 97;
	int l = 65;

	do {
		putchar(n);
		n++;
	} while (n <= 122);
	do {
		putchar(l);
		l++;
	} while (l <= 90);
	putchar('\n');
	return (0);
}
