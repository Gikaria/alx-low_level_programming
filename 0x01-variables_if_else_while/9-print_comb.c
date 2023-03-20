#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print out possible combinations of single digit numbers'
 * Return: 0 always (success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
		if (d == 57)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
