#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * main  block
 * Return: 0 always(success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and  that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
