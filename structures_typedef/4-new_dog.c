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
		name = "(nil)";
	if (age == NULL)
		age = "(nil)";
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
