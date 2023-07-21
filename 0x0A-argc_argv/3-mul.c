#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - bla
 *@argc: bla
 *@argv: bla
 *Return: bla bla
 */

int main(int argc, char **argv)
{
	int x;
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
		return (0);
	}
}
