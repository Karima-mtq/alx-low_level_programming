#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - struct.
  * @dg: struct's name
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg)
	{
		dg->name = name;
		dg->age = age;
		dg->owner = owner;
	}
}
