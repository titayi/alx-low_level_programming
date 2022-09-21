#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: param
 * Return: String
 */
char *rot13(char *str)
{
	int i = 0, k;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (str[i] == s[k])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
