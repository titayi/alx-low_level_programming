#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Size of argv
 * @argv: An array size of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
}
