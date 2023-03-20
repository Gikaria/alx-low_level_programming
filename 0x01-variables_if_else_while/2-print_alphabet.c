#include <stdio.h>
/**
 * main  - Entry point
 * Description: 'print out lower case alphabets'
 * Return: 0 if sucess
 */
int main(void)
{
	int c = 97;

	do {
		putchar(c);
		c++;
	} while (c <= 122);
	putchar('\n');
	return (0);
}
