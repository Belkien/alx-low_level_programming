#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog struct
 * @d: object of struct
 * @name: character string
 * @age: integer
 * @owner: character string
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
