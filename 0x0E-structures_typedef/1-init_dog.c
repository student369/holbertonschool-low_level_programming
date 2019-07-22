#include "dog.h"
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
void print_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
