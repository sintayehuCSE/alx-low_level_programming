#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type struct dog
 * @name: A char pointer to a name of dog
 * @age: Age of a new type struct dog
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
