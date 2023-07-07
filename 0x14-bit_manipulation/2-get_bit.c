#include "main.h"

void print_binary(unsigned long int n);
/**
 * get_bit - The function returns the value of bit at a given index
 * @n: The integer to convert into bit
 * @index: The index of bit value to return
 *
 * Return: The integer value of bit or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
