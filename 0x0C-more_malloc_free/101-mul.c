#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_valid_digit - function
 * @str: char
 * Return: int 0 or 1
 */
int is_valid_digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * multiply - function
 * @num1: char
 * @num2: char
 * Return: int
 */

int multiply(const char *num1, const char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - function
 * @argc: number of args
 * @argv: vector of args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_digit(argv[1]) || !is_valid_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

