#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - type
 * @name: name
 * @owner: owner
 * @age: age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
