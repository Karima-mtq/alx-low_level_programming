#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @dog: struct
 * @dg: strunct's name
 */
void print_dog(struct dog *dg)
{
	if(dg == NULL)
	{
		return;
	}
	
	printf("Name: %s\n", (dg->name != NULL) ? dg->name : "(nil)\n");
	printf("Age: %f\n", dg->age);
	printf("Owner: %s\n",(dg->owner != NULL) ? dg->name : "(nil)\n");
		
}
