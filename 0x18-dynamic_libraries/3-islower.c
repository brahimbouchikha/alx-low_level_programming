#include "main.h"
#include <ctype.h>

/**
 * _islower - check characters if is lowercase
 * @c: the input character
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
