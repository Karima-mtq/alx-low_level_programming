#include "main.h"
/**
 * reverse_array - reverse array.
 * @a: The array.
 * @n: The number of elements.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *i = a;
	int *j = a + n - 1;

	while (i < j)
	{
		int temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}

}
