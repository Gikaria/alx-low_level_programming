#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print out integers using putchar function'
 * Return: 0 if success
 */
int main(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		putchar(z + 48);
	}
	putchar('\n');
	return (0);
}
