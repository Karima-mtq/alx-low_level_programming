/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

#include "main.h"
/**
 * Function print_alphabet prints alphabets in lowercase
 */

void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
