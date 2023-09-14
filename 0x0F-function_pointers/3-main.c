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
	int num1, num2, calc, (*op_function)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_function = get_op_func(argv[2]);
	if (!op_function)
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && !num2)
	{
		printf("Error\n");
		return (100);
	}
	calc = op_function(num1, num2);
	printf("%d\n", calc);
	return (0);
}
