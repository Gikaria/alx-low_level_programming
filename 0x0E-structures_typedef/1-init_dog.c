#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- the function initializes struct dog *d
 * @d: pointer to variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !=  NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}