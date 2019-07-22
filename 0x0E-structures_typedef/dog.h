#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure of a dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 * Author: José Calderón
 * Description: A struct to create a dog
 * taken the name, age and the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
