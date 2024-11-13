#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog.
 * @name : of the dog.
 * @age : of the dog.
 * @owner : name of the owner.
 **/

typedef struct dog
{
char *name;
float age;
char *owner;
} Dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
