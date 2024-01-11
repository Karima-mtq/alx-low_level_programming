#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates passwords.
 * @argc: umber of arguments.
 * @argv: array of pointers to args.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, var;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	var = (len ^ 59) & 63;
	password[0] = codex[var];

	var = 0;
	for (i = 0; i < len; i++)
		var += argv[1][i];
	password[1] = codex[(var ^ 79) & 63];

	var = 1;
	for (i = 0; i < len; i++)
		var *= argv[1][i];
	password[2] = codex[(var ^ 85) & 63];

	var = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > var)
			var = argv[1][i];
	}
	srand(var ^ 14);
	password[3] = codex[rand() & 63];

	var = 0;
	for (i = 0; i < len; i++)
		var += (argv[1][i] * argv[1][i]);
	password[4] = codex[(var ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		var = rand();
	password[5] = codex[(var ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
