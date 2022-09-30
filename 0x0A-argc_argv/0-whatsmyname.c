#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
