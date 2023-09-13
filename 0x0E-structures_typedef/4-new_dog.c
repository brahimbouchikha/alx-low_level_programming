#include "dog.h"

/**
 * _str_len - Calculate the length of string
 * @str: pointer to string
 *
 * Return: lenght of string
 */

size_t _str_len(char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, name_len, owner_len;
	
	dog_t *ptr;
	if (!name || age < 0 || !owner)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	name_len = _str_len(name);
	owner_len = _str_len(name);

	ptr->name = (char *) malloc(sizeof(char) * name_len + 1);
	ptr->owner = (char *) malloc(sizeof(char) * owner_len + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
	{
		ptr->name[i] = name[i];
	}
	for (i = 0; i <= owner_len; i++)
	{
		ptr->owner[i] = owner[i];
	}
	ptr->age = age;
	return (ptr);
}
