#include "main.h"
/**
 * print_chessboard - function thta prints a chess board
 * @a: a pointer array of type character
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');

	}
}
