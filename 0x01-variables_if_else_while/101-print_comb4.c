#include <stdio.h>
/**
 * main - Entry point
 * Description:'The function prints out combination of intergers'
 * Return: 0 Always (success)
 */
int main(void)
{
	int c1, c2, c3;

	for (c1 = 0; c1 < 8; c1++)
	{
		for (c2 = c1 + 1; c2 < 9; c2++)
		{
			for (c3 = c2 + 1; c3 < 10; c3++)
			{
				putchar((c1 % 10) + '0');
				putchar((c2 % 10) + '0');
				putchar((c3 % 10) + '0');
				if (c1 == 7 && c2 == 8 && c3 == 9)

					continue;


				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
