#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name as it is
 * @name: The name to print out
 * @f: pointer to function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL &&  f != NULL)
	{
		f(name);
	}
}
