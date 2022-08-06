#include "main.h"
/**
 * _print_uint - prints unsigned integers or absolute integers
 * @args: arguments passed to the function
 *
 * Return: number of characters printed
 */
int _print_uint(va_list args)
{
	int num = 0;

	num = va_arg(args, int);

	if (num < 0)
		fprintf(stdout, "%d\n", -(num));

	return (1);
}

