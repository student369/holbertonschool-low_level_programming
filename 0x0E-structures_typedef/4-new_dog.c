#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function to create a new dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 * Author: José Calderón
 * Return: a  new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}
