#include <unistd.h>

/**
 * main - write witout printf or puts
 * Return: 1
 */

int main(void)
{
	int len;

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	len = sizeof(str) - 1;
	write(1, str, len);
	return (1);
}
