#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * init_dog - Function to allocate in memory
 * @b: The bytes to allocate
 *
 * Author: José Calderón
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
