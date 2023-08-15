#include "dog.h"
/**
 * init_dog - Initialize Dog
 * @d: Dog Function declaration
 * @name: Name of Dog for the function
 * @age: Age of Dog for  the function
 * @owner:  owner of Dog
 * Return: return Null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
