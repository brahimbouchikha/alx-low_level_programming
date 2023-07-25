#include "main.h"
#include <stdio.h>
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: input string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
