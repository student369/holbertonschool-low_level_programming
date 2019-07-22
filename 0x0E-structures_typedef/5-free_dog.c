#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function to free a dog structure
 * @d: The dog_t structure
 *
 * Author: José Calderón
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
