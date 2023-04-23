#include "main.h"
/**
 * check_palindrome- checks pointer to the string
 * @str: string to check for palindrome
 * @n: the length of the string
 * @k: the iterator through length of the string
 * Return : 1 if palindrome else not palindrome
 */
int check_palindrome(char *str, int n, int k)
{
	if (*(str + n) != *(str + k - 1))
	{
		return (0);
	}
	if (n >= k)
	{
		return (1);
	}
	return  (check_palindrome(str, n + 1, k - 1));
}
/**
 * _str_len - function checks for the length of the string
 * @str: the string to check for its length
 * Return: length of the string
 */
int _str_len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _str_len(str + 1));
}
/**
 * is_palindrome - confirms if string is palindrome
 * @s: string to confiem if is palindrome
 * Return: 1 to confirm 0 to deny
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _str_len(s)));
}
