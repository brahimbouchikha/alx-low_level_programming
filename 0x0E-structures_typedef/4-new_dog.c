#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function that return a length of string
 * @str: the input string
 * Return: length of string
 */

int _strlen(char *str)
{
	int length = 0;

	for (; *str != '\0'; str++)
		length++;

	return (length);
}

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: souce value
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
