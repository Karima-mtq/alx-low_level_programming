#include <stdio.h>
/**
  * tst - tsts recursively if a number is prime
  * @i: integer
  * @j: integer
  * Return: 1 or 0.
  */
int tst_prime(int i, int j)
{
	if (j % i == 0 || j < 2)
		return (0);
	else if (i == j - 1)
		return (1);
	else if (j > i)
		return (tst_prime(i + 1, j));
	return (1);
}
/**
  * is_prime_number - checks prime number
  * @n: integer
  * Return: 1 or 0.
  */
int is_prime_number(int n)
{
	return (tst_prime(2, n));
}
