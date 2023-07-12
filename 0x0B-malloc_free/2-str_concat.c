#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Return: concatenates of two strings.
 */

char *str_concat(char *s1, char *s2)
{
	int n, m, i = 0, j = 0, len;
	char *tab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	len = i + j;
	tab = malloc((len * sizeof(char)) + 1);
	if (tab == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
	{
		tab[n] = s1[n];
	}
	for (m = 0; m < j; m++)
	{
		tab[m + i] = s2[m];
	}
	tab[len] = '\0';
	return (tab);
}
