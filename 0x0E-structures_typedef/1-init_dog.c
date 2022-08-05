#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initializing a variable of type struct dog
 *@d: pointer to struct dog that will be initialized
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *
 *Return: Nothing
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
