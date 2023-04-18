#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLeng, ownerLeng, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	nameLeng = ownerLeng = 0;
	while (name[nameLeng++])
		;
	while (owner[ownerLeng++])
		;
	d1->name = malloc(nameLeng * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nameLeng; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerLeng * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerLeng; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
