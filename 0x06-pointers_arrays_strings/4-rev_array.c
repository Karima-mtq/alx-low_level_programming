#include "main.h"

/**
 * reverse_array - reverse array.
 * @a: The array.
 * @n: The number of elements.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, l, temp;

	if (n % 2 == 0)
	{
		l = n / 2;
	}
	else
	{
		l = (n - 1) / 2;
	}
	for (i = 0; i <= l; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;

	}

}
