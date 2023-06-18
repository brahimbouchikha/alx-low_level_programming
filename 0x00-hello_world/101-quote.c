#include <unistd.h>

/**
 * main - write witout printf or puts
 * Return: 1
 */

int main(void)
{
	char str[];
	int len;

	str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	len = sizeof(str) - 1;
	write(1, str, len);
	return (1);
}
