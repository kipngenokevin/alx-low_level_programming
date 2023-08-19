#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog attributes
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This struct stores dog's attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
