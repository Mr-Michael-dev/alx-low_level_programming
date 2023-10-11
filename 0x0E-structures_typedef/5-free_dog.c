#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated memory
 * @d: pointer to the memory to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
