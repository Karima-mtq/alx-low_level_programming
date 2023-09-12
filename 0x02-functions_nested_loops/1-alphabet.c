#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	/**
	 * Function print_alphabet prints alphabets in lowercase
	 */

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
