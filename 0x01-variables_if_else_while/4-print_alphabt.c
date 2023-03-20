#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print out lower case alphabets except q and e'
 * Return: 0 if sucess
 */
int main(void)
{
	int ch = 97;

	do {
		if (ch == 101 || ch == 113)
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	} while (ch <= 122);
	putchar('\n');
	return (0);
}
