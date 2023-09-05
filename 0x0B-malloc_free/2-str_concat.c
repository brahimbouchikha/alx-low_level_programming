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
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer that point to new string contains the concatenate
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2, newsize;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	size1 = strlength(s1);
	size2 = strlength(s2);
	newsize = size1 + size2 + 1;
	ptr = (char *)(malloc(sizeof(char) * newsize));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		ptr[i + size1] = s2[i];
	}
	ptr[newsize - 1] = '\0';
	return (ptr);
}
