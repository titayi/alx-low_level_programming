#include <stdio.h>

/**
 * main - Entry point 
 * @argc: Size of argv
 * @argv: Anarray size of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
