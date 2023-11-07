#include "dog.h"
/**
 *
 *
 *
 */
void print_dog(struct dog *dg)
{
	if(dg == NULL)
	{
		return;
	}
	
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)\n");
	printf("Age: %f\n", (d->age >= 0) ? d->age : "(nil)\n");
	printf("Owner: %s\n",(d->owner != NULL) ? d->owner : "(nil)\n");
		
}
