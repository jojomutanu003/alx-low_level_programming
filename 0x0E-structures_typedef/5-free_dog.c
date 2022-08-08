#include "dog.h"

/**
 *free_dog - frees a structure variable of type dog_t
 *@d: pointer to the structure variable to be freed
 *Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d != 0)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
