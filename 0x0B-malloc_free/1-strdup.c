#include "main.h"

/**
 * strlength - return length of string
 * @c: pointer to string
 *
 * Return: lenght of string
 */
unsigned int strlength(char *c)
{
	unsigned int len = 0;

	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	size = strlength(str) + 1;
	ptr = (char *)(malloc(sizeof(char) * size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';
	return (ptr);
}
