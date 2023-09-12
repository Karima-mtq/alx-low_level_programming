#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 1;
	
	for (i=1; i<= 10; i++)
	{

		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
		_putchar('\n');
	
}
