#include <stdio.h>

/**
 *main - bla
 *@argc: bla
 *@argv: bla
 *Return: Zero
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
