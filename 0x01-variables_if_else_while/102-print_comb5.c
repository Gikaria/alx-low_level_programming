#include <stdio.h>
/**
 * main - Entry point
 * description:'prints out double combination of integers'
 * Return: 0 success always
 */
int main(void)
{
	int f1, f2;

	for (f1 = 0; f1 <= 98; f1++)
	{
		for (f2 = f1 + 1; f2 <= 99; f2++)
		{
			putchar((f1 / 10) + '0');
			putchar((f1 % 10) + '0');
			putchar(' ');
			putchar((f2 / 10) + '0');
			putchar((f2 % 10) + '0');
			if (f1 == 98 && f2 == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
