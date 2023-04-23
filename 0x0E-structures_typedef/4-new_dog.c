#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creats a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog owner's name
 * Return: pointer to new dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int j, new_name, new_owner;
	dog_t *dog_s = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);

	if (dog_s == NULL)
		return (NULL);

	for (new_name = 0; name[new_name]; new_name++)
		;

	new_name++;
	dog_s->name = malloc(new_name * sizeof(char));
	if (dog_s->name == NULL)
	{
		free(dog_s);
		return (NULL);
	}
	for (j = 0; j < new_name; j++)
		dog_s->name[j] = name[j];

	dog_s->age = age;

	for (new_owner = 0; owner[new_owner]; new_owner++)
		;
	new_owner++;
	dog_s->owner = malloc(new_owner * sizeof(char));
	if (dog_s->owner == NULL)
	{
		free(dog_s);
		return (NULL);
	}
	for (j = 0; j < new_owner; j++)
		dog_s->owner[j] = owner[j];

	return (dog_s);
}
