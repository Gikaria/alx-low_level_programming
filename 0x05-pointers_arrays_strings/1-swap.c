#include "main.h"
/**
 * swap_int - the function swaps tow integers
 * @a: swap this interger with interger b
 * @b: swap this interger wth interger a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
