#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints details of the dog
 * @d: pointer tovariable of type struct dog
 */
void print_dog(struct dog *d)
{
	char name = "(nil)";

	if (d != NULL)
	{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
	}
	printf("Name: %s\n", name);
}
