#include "main.h"

/**
 * clear_bit - The function sets the value of bit to 0
 * @n: number to converts its binary bit number
 * @index: index position of bit to set to zero
 *
 * Return: 1 success or -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
