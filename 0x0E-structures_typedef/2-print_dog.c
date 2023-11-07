#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @d: strunct's pointer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->name : "(nil)\n");
	}
}
