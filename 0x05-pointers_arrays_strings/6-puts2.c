#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    int i = 0;
    int ignore_null = 0;

    while (str[i] != '\0')
    {
        if (!ignore_null && str[i] != '\0')
        {
            _putchar(str[i]);
        }

        if (str[i] == '\0' && !ignore_null)
	{
		break;
        }
        

        i += 2;
    }

    _putchar('\n');
}
