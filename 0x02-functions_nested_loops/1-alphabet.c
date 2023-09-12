/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets.
 *
 * This function prints lowercase alphabets from 'a' to 'z' using putchar.
 */

void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
