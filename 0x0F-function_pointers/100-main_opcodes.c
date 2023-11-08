#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - function
 * @start: char
 * @size: ss
 * Return: voide
 */
void print_opcodes(unsigned char *start, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%02x ", start[i]);
	}
	printf("\n");
}
/**
 * main - function
 * @argc: int
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	unsigned char *main_ptr;
	int num_bytes;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		return (2);
	}
	main_ptr = (unsigned char *)main;
	print_opcodes(main_ptr, num_bytes);
	return (0);
}

