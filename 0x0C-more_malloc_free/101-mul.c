#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks whether characters are digits
 * @c: pointer to array of characters
 *
 * Return: 1 if digit  -1 on failure
 */

int _isdigit(char *c)
{
	int i = 0;

	while (c[i])
	{
	if (c[i] < '0' || c[i] > '9')
	{
		printf("Error\n");
		return (0);
	}
	i++;
	}
	return (1);
}

/**
 * str_len - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (1)
	{
		if (!*s)
			break;

		s++;
		len++;
	}
	return (len);
}
/**
 * main - finds product of two positive integers
 * @argc:count number of integers
 * @argv: vector representation of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *str1, *str2, e[] = "Error\n";
	int j, b = 0, n1, n2, len, c, d1, d2, k, *res;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
	{
		for (k = 0; e[k]; k++)
			_putchar(e[k]);
		exit(98);
	}
	n1 = str_len(str1);
	n2 = str_len(str2);
	len = n1 + n2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		exit(0);
	for (j = 0; j <= n1 + n2; j++)
		res[j] = 0;
	for (n1 = n1 - 1; n1 >= 0; n1--)
	{
		d1 = str1[n1] - '0';
		c = 0;
		for (n2 = str_len(str2) - 1; n2 >= 0; n2--)
		{
			d2 = str2[n2] - '0';
			c += res[n1 + n2 + 1] + (d1 * d2);
			res[n1 + n2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[n1 + n2 + 1] += c;
	}
	for (j = 0; j < len - 1; j++)
	{
		if (res[j])
			b = 1;
		if (b)
			_putchar(res[j] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
