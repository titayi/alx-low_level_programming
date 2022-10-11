#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of the string
 * @str: Param
 * Return: success
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;

	return (len);
}

/**
 * _strcopy - copies the string
 * @dest: Param 1
 * @src: Param 2
 * Return: String
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bosco = malloc(sizeof(dog_t));
	if (bosco == NULL)
		return (NULL);

	bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bosco->name == NULL)
	{
		free(bosco);
		return (NULL);
	}

	bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bosco->owner == NULL)
	{
		free(bosco->name);
		free(bosco);
		return (NULL);
	}

	bosco->name = _strcopy(bosco->name, name);
	bosco->age = age;
	bosco->owner = _strcopy(bosco->owner, owner);

	return (bosco);
}
