#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	struct dog *doggy = NULL;

	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	len2 = 0;
	while (owner[len2] != '\0')
		len2++;
	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = malloc(len1 + 1);
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(len2 + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		doggy->name[i] = name[i];
	for (i = 0; i <= len2; i++)
		doggy->owner[i] = owner[i];
	doggy->age = age;
	return (doggy);
}
