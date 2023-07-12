#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string input
 * Return: tableau of char
 */

char *_strdup(char *str)
{
	char *tab;
	unsigned int i, len = 1;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	tab = malloc((len * sizeof(char)) + 1);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		tab[i] = str[i];
	tab[len] = '\0';
	return (tab);
}
