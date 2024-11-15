#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL)
		new_dog->name = "(nil)";
	else
		new_dog->name = name;
	if (owner == NULL)
		new_dog->owner = "(nil)";
	else
		new_dog->owner = owner;
	if (age < 0)
		new_dog->age = 0;
	else
		new_dog->age = age;
	return (new_dog);
}
