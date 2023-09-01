#include "main.h"

/**
 * lengthstring - calculate lenght of string
 * @c: pointer to string
 *
 * Return: lenght of string
 */

int lengthstring(char *c)
{
	if (*c == '\0')
		return (0);
	else
		return (1 + lengthstring(c + 1));
}

/**
 * compar - compare each character of the string
 * @c: pointer to string to compare
 * @start: the first character of string
 * @end: the last character of string
 *
 * Return: 1 if true, 0 if false
 */
int compar(char *c, int start, int end)
{
	if (*(c + start) != *(c + end))
	{
		return (0);
	}
	else
	{
		if (start < end)
		return (compar(c, start + 1, end - 1));
	}
	return (1);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: pointer to string
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	return (compar(s, 0, lengthstring(s) - 1));
}
