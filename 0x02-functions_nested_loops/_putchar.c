#include <unistd.h>

/**
 * _putchar - write the caracter c 
 * @c: the chacter to write 
 * Return: 0
 */
int _putchar(char c)
{
	write(1,&c,1);
	return(0);
}
