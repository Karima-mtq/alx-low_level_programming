#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

/**
 *print_alphabet is a finction that print all lowercase alphabets
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
