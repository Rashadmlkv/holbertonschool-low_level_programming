#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));

	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
