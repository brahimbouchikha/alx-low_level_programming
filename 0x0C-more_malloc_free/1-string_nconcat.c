#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the size to allocate
 * Return: pointer of concatenates two strings
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		len = i + j + 1;
	else
		len = i + n + 1;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (l = 0; l < len - i - 1; l++)
	{
		str[k + l] = s2[l];
	}
	str[len] = '\0';
	return (str);
}
