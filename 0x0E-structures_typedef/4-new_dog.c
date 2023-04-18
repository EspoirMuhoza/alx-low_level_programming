#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog
 * if fails, returns Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int Age, Name, Owner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (Name = 0; name[Name]; Name++)
		;

	for (Owner = 0; owner[Owner]; Owner++)
		;

	p_dog->name = malloc(Name + 1);
	p_dog->owner = malloc(Owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (Age = 0; Age < Name; Age++)
		p_dog->name[Age] = name[Age];
	p_dog->name[Age] = '\0';

	p_dog->age = age;

	for (Age = 0; Age < Ownerr; Age++)
		p_dog->owner[Age] = owner[Age];
	p_dog->owner[Age] = '\0';

	return (p_dog);
}
