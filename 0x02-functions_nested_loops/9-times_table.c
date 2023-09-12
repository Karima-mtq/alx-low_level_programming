#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */

void times_table(void)
{
    int i, j, n;

    for (i = 0; i <= 9; i++)
    {
        n = 1;  // Initialize n to 1 for the first column
        for (j = 0; j <= 9; j++)
        {
            int product = i * n;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (product < 10)
            {
                _putchar(' '); // Add a space for alignment
            }
            else
            {
                _putchar(product / 10 + '0');
            }

            _putchar(product % 10 + '0');

            n++; // Increment n for the next column
        }
        _putchar('\n');
    }
}

