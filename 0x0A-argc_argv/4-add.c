#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

/**
 *main - bla
 *@argc: bla
 *@argv: bla
 *Return: bla bla
 */

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}

