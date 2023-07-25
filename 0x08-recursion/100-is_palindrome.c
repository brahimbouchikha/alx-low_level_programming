#include "main.h"

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);

/**
 * last_index - return the last index of a string
 * @s: pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, end - 1, end % 2));
}

/**
 * check - check the palindrome
 * @s: string
 * @start: int from right to left
 * @end: int from left to right
 * @mod: int
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
