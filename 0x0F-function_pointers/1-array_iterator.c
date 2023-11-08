#include "function_pointers.h"

/**
  * array_iterator - function
  * @array: array
  * @size: int
  * @action: poiter to a function
  *
  * Return: Void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
