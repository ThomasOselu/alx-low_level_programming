#ifndef DOG_H
#define DOG_H
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
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
