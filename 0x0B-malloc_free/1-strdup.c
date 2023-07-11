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

	while (str[len])
		len++;

	if (len == 0)
		return (NULL);

	tab = malloc((len * sizeof(char)) + 1);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		tab[i] = str[i];
	tab[len] = '\0';
	return (tab);
}
