#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - structure
 *@name: array of character
 *@age: floate
 *@owner: array of character
 *
 *Return: string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == Null || !(name) || !(owner))
	{
		free(p_dog);
		return (Null);
	}

	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owmer[lowner]; lowner++)
		;

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (Null);
	}

	for (i = 0; i < lname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < lname; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
