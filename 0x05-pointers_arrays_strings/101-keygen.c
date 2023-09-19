#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * _sum - addition
 * @s: input char
 * Return: addition
 */
unsigned long _sum(char *s)
{
unsigned long somme = 0;
while (*s != 0)
{
	somme += *s;
	s++;
}
return (somme);
}
/**
 * main - generate password 
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i, tst = 0;

	srand(time(NULL));
	while (tst == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = a[rand() % (sizeof(a) - 1)];
		}
		s[i] = '\0';
		sum = _sum(s);
		if (sum == 2772)
		{
			tst = 1;
			printf("%s", s);
		}
	}
return (0);
}
