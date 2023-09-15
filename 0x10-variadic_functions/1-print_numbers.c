#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if(!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int),
			(i < n - 1) ? (separator ? separator : "") : "\n";
	}

	va_end(args);
}
