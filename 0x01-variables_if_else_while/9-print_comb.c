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
		if (digit != '9')
		{
			putchar(digit + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(digit +'0\n');
		}
	}

	return (0);
}
