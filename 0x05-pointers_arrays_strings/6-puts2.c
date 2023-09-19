#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    int i = 0;
    int tst_var = 1;

    while (str[i] != '\0')
    {
        if (tst_var)
        {
            _putchar(str[i]);
        }

        tst_var = !tst_var; 
        i++;
    }

    _putchar('\n');
}
