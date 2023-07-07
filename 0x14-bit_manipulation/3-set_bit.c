#include "main.h"

/**
 * set_bit - set bit at a given bit
 * @n: number in binary form
 * @index: index of the of the bit
 *
 * Return: 1 if it worked  -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
