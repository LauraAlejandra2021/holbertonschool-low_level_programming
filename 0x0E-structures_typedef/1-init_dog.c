#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - inicializar dog
 *@name: Name of the dog
 *@age: edad
 *@owner: propietario
 *@d: nuevo elemento
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
