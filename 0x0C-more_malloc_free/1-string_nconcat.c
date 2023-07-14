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
	unsigned int i = 0, j = 0, k = 0, l = 0, m = 0;
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
		str = malloc(sizeof(char) * (i + j + 1));
	else
		str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
		return (NULL);

	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}
	m = k; 
	while (n >= j && l < (i + j))
	{
		str[k++] = s2[l++];
	
	}
	while (n < j && j < (i + n))
	{
		str[k++] = s2[l++];
	}
	m +=l;
	str[m] = '\0';
	return (str);
}
