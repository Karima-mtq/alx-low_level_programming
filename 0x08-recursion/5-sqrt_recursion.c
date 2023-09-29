#include "main.h"
/**
 * tst - function tests if n is square
 * @i: integer
 * @j: integer
 * Return: integer
 */

int tst(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (tst(i + 1, j));
}

/**
 * _sqrt_recursion - square
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (tst(1, n));
}
