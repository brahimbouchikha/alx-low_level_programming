#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 * Return:0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (k < 9)
				{			
					putchar(',');
					if (j >= 1 && k >= 2)
				#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 * Return:0
 */
int main(void)
{
        int i, j, k;

        for (i = 0; i < 9; i++)
        {
                for (j = i + 1; j < 9; j++)
                {	
			if ( j > 1)
			{
				putchar(',');
				putchar(' ';)
                        for (k = j + 1; k < 10; k++)
                        {
                                putchar('0' + i);
                                putchar('0' + j);
                                putchar('0' + k);
                                if (k < 9)
				{
                                        putchar(',');
                                        if (j >= 1 && k >= 2)
                                                putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
		putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
