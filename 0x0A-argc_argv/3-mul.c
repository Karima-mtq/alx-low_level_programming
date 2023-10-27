#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - function
 * @argc: argument
 * @argv: list
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0, j = 0;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
