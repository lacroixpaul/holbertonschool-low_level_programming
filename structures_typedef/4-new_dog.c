#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *new_dog - creates a new dog..
 * @name : of the dog.
 * @age : of the dog.
 * @owner : name of the owner.
 * Return: new dog.
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	{
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	}
	return (new_dog);
}
