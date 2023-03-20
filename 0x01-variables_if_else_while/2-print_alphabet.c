#include <stdio.h>
/**
 * main  - Entry point
 * Description: 'print out lower case alphabets'
 * Return: 0 if sucess
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
