#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function that returns addition of two integers
 * @a: first integer
 * @b: the second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- The function returns difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns divison of two integers
 * @a: first integer
 * @b: second integer
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- function that returns modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
