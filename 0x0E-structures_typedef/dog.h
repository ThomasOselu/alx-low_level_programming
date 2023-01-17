#ifndef DOG_H
#define DOG_h


#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog- a new data type representing a dog
 * @name: pointer to name
 * @age: float represent age
 * @owner:pointer to owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t-the typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
