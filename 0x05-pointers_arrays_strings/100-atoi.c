#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the character
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[1] != '\0')
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] == '-'))
		{
			sign = sign * -1;
		}
		else if ((s[i] >= '0' && s[i] <= '9'))
		{
			num = num * 10 + (s[i] - '0');
			if ((s[i + 1] < '0' || s[i + 1] > '9'))
			{
				break;
			}
		}
		i++;
	}
	return (num * sign);
}
