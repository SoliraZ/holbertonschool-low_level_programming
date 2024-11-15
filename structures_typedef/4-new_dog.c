#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t	*newdog;
	char	*new_name;
	char	*new_owner;
	
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(newdog);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;
	return (newdog);
}
