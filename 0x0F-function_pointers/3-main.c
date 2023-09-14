#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of argument
 * @argv: argument value
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
