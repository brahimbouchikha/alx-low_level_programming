#include "main.h"
#include <ctype.h>

/**
 * is_lower - check lowercase
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	int r;

	if(islower(c)!=0)
		r=0;
	else
		r=1;
	return r;
}
