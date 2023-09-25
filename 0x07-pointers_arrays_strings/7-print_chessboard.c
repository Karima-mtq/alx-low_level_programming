#include "main.h"
/**
 * print_chessboard - 
 * @a: 
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;

	unsigned int sum, sum1;

	 sum = 0;
	 sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
