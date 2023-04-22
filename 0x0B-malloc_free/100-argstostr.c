#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments in the program
 * @ac: argument count
 * @av: vector of argument
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	char *str1, *str;
	int a, b, str_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	a = 0, str_len = 0;
	while (a < ac)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, str_len++)
			;
		str_len++;
		a++;
	}
	str_len++;

	str1 = malloc(str_len * sizeof(char));

	if (str1 == NULL)
		return (NULL);

	str = str1;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++)
		{
			*str1 = av[a][b];
			str1++;
		}
		*str1 = '\n';
		str1++;
	}
	return (str);
}
