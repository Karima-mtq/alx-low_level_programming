#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_valid_digit - Check if a string contains only valid digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_valid_digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * initialize_result - Initialize the result buffer to '0'.
 * @result: The buffer to be initialized.
 * @len: The length of the buffer.
 */
void initialize_result(char *result, int len)
{
	memset(result, '0', len);
	result[len] = '\0';
}

/**
 * add_numbers - Add two numbers represented as strings.
 * @a: The first number as a string.
 * @b: The second number as a string.
 * @r: The result buffer to store the sum.
 * @i: The starting index in the result buffer.
 * @l1: len1
 * @l2: len2
 */
void add_numbers(const char *a, const char *b, char *r, int i, int l1, int l2)
{
	int carry = 0;
	int n1, j, k, n2, product;

	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = a[i] - '0';
		j = l2 - 1;
		k = i + l2;
		while (j >= 0 || carry > 0)
		{
			n2 = (j >= 0) ? (b[j] - '0') : 0;
			product = n1 * n2 + (r[k] - '0') + carry;
			carry = product / 10;
			r[k] = (product % 10) + '0';
			k--;
			j--;
		}
	}
}

/**
 * multiply - Multiply two numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: result of the multiplication.
 */
char *multiply(const char *num1, const char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	char *result = (char *)malloc(len_result + 1);
	int i;

	if (result == NULL)
	{
		return (NULL);
	}

	initialize_result(result, len_result);
	add_numbers(num1, num2, result, 0, len1, len2);

	i = 0;

	while (i < len_result && result[i] == '0')
	{
		i++;
	}

	if (i == len_result)
	{
		free(result);
		return (strdup("0"));
	}
	if (i > 0)
	{
		int shift = len_result - i;

		memmove(result, result + i, shift);
		result[shift] = '\0';
	}

	return (result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 if the number of arguments is incorrect or
 *         if the arguments are not valid digits, 1 if memory allocation fails.
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_valid_digit(argv[1]) || !is_valid_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}
