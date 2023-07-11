#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int n = 0, i;
	char tmp;

	while(s[n] != '\0')
		n++;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}
}
