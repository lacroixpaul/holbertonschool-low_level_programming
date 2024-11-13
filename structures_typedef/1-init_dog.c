#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d : pointer to the structure.
 * @name : of the dog.
 * @age : of the dog.
 * @owner : name of the owner.
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
