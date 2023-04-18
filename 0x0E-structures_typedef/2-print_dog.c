#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints details of the dog
 * @d: pointer tovariable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
