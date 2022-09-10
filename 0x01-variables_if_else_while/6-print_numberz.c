#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	init h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}

	putchar('\h');

	return (0);
}
