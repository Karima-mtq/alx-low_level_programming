#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char l = 'a';
	for (l='0'; l <= '9'; l++);
	{
		putchar(l);
		l++;
	}

	for (l='a'; l <= 'f'; l++)
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
