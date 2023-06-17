#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i, j;
	
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j <= 9; j++)
		{
			putchar('0' + i);
		       	putchar('0' + j);
			if(i <= 8)
				putchar(',');	
			if (j>1)
			{
				putchar(' ');
			}
		}
	}

	return (0)
}
