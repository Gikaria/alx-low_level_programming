#include "main.h"

/**
 * get_endianness - check if binary representation is big endians
 * or little endian
 *
 * Return: 0 if big endianness, 1 little endianness
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *s;

	s = (char *) &k; /* Points to first byte of the integer */
	if (*s == 1)
		return (1); /* First byte resembles 0x01 return 0 */
	else
		return (0); /* First byte resembles 0x00 return 1 */
}
