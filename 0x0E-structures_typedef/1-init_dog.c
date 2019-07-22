#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function to allocate in memory
 * @d: The dog structure
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 * Author: José Calderón
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || age == 0 || owner == NULL)
		exit(1);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
