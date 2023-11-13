#include "main.h"

/**
 * _isalpha -  check for alphabetic character
 * @c: the character that will be checked
 * Return: 1 if character is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

