#include "main.h"
/**
 * check_wild - iterates through wildstring till there is no wildstring
 * @wildstring: the string to iterate through
 */

void check_wild(char **wildstring)
{
	if (**wildstring == '*')
	{
		(*wildstring)++;
		check_wild(wildstring);
	}
}
/**
 * wild_free_len - returns lengths of a string with no wildcards
 * @s: the string with no wildcard
 * Return: the length of the string
 */
int wild_free_len(char *s)
{
	int i, j;

	i = 0, j = 0;

	if (*(s + i))
	{
		if (*s != '*')
			j++;

		i++;
		j = j + wild_free_len(s + i);
	}
	return (j);
}
/**
 * afterfix_match- checks for similarity between two strings
 * @s: the string to cehck for similarity
 * @afterfix: the after fix string
 * Return: string s and  afterfix are identical
 */
char *afterfix_match(char *s, char *afterfix)
{
	int len_1 = wild_free_len(s) - 1;
	int len_2 = wild_free_len(afterfix) - 1;

	if (*afterfix == '*')
	{
		check_wild(&afterfix);
	}
	if (*(s + len_1 - len_2) == *afterfix && *afterfix != '\0')
	{
		afterfix++;
		return (afterfix_match(s, afterfix));
	}
	return (afterfix);
}
/**
 * wildcmp - check for similarity between strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 0 if the strings are identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		check_wild(&s2);
		s2 = afterfix_match(s1, s2);
	}
	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
