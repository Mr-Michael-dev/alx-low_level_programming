#include "dog.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_dog - prints the elements of struct dog
 * @d: pointer to the struct variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		return;
	}

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);

	(d->age == 0.0) ? printf("Age: %f\n") : printf("Age: %f\n", d->age, d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);

}
