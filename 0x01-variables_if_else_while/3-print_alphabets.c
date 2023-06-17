#include <stdio.h>

/*
 * main - write aphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char lc,uc;

	lc = 'a';
	uc = 'A';
	while (lc < 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc < 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
