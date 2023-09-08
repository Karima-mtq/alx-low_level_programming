#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	//Initialize the random number generator with the current time
	srand(time(0));
	//Generate a random number between INT_MIN and INT_MAX
	n = rand() - RAND_MAX / 2;


	if(n>0)
	{
		printf("%d is positive \n ",n);
	}
	else if (n<0)
	{
		printf("%d is negative \n",n);
	}
	else
	{
		printf("%d is zero \n",n);
	}

	return(0);
}

