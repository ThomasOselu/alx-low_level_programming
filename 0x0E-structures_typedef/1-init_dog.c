#include "dog.h"
#include <stdio.h>
/**
 * init_dog- Write a function that initialize a variable of type struct dog
 * @d: identification of dog
 * @name: pointer to dog name
 * @age: pointer to age
 * @owner:pointer to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
