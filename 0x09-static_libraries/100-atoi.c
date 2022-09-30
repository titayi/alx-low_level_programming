#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the character
 * Return: 0
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *t;

	t = s;
	num = 0;
	sign = 1;
	while (*t != '\0' && (*t < '0' || *t > '9'))
	{
		if (*t == '-')
			sign *= -1;
		t++;
	}
	if (*t != '\0')
	{
		do {
			num = num * 10 + (*t - '0');
			t++;
		} while (*t >= '0' && *t <= '9');
	}
	return (num * sign);
}
