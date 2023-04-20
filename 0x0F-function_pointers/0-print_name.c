#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name as it is
 * @name: the name to print out
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(0);
	}
	f(name);
}
