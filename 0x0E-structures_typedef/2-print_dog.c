#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  The function to print
 * @d: The struct for dog
 */
void print_dog(struct dog *d)
{
	
			printf("Name: %s\n", d->name);
	
			printf("Age: %f\n", d->age);
	
	
			printf("Owner: %s\n", d->owner);
	
}
