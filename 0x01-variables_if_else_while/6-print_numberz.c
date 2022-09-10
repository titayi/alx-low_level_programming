#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
		putchar((k % 10) + '0');

	putchar('\n');

	return (0);
}
