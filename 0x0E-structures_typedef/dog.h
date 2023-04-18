#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a structure for the dog class
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
