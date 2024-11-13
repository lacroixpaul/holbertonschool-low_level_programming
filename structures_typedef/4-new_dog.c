#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to analyze.
 * Return: lenght of s.
 **/

int _strlen(char *s)
{
	int length;

	for (length = 0;  s[length] != '\0'; length++)
	{
	}
	return (length);
}

/**
 * _strncpy - copies a string.
 * @dest: string of destinatation.
 * @src : string to copy.
 * @n: bite limit.
 * Return: dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
		return (NULL);

	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
		return (NULL);
	_strncpy(new_dog->name, name, _strlen(name) + 1);
	new_dog->age = age;
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
		return (NULL);
	 _strncpy(new_dog->owner, owner, _strlen(owner) + 1);

return (new_dog);
}
