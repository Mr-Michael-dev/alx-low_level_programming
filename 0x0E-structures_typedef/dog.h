#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct type for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner kf the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
