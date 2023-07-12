#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **tab;

	if (width == 0 || height == 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(tab[j]);
			}
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
