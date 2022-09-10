#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int m, k, w;

	for (m = '0'; m <= '9'; m++)
	{	
		for (k = '0'; k <= '9'; k++)
		{
			for (w = '0'; w = '9'; w++)
			{
				if (m < k && k < w)

   				{
					putchar(m);
					putchar(k);
					putchar(w);

					if (m != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
