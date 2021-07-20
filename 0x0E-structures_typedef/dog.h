#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code for Holberton School students.
 *@name: Name of the dog
 *@age: edad
 *@owner: propietario
 */

struct dog
{
	char *name;
	float age;
	char *owner;

} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
