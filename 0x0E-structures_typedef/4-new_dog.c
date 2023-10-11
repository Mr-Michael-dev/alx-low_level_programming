#include "dog.h"
#include <stdlib.h>
#include <strings.h>

/**
 * new_dog - creates a new dog of type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
		free(new_dog);
	}

	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner  = strdup(owner);

	return (new_dog);
}
