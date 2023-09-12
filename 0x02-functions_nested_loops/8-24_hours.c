#include "main.h"
/**
 * jack_bauer - Entry point
 * 
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0, j = 0;
	
	for (i = 0, i < 24, i++)
	{
		if (i < 10)
		{
			_putchar(0 + '0');
		}
		_putchar(i + '0');
		_putchar(':' + '0');
		for (j = 0; j<= 59; j ++)
		{
			if (j < 10)
                	{	
                        	_putchar(0 + '0');
                	}
			_putchar(j + '0');
			_putchar('\n');
		}
	}	
}
