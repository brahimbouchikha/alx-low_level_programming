#include "main.h"

/**
 * wildcmp_loop - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to seconde string
 *
 * Return: 1 if the strings match, and 0 otherwise.
 */

int wildcmp_loop(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp_loop(s1, s2 + 1));
		return (wildcmp_loop(s1 + 1, s2) || wildcmp_loop(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp_loop(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_loop(s1, s2));
}
