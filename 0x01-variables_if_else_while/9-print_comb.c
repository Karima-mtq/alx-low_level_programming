#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		putchar(',');
		if (digit != '9')
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
