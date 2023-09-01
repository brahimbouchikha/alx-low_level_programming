#include <unistd.h>

/**
 * _putchar - write the caracter c 
 * @c: the chacter to write 
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
