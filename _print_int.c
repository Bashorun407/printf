#include "main.h"
/**
 ** _print_int - prints integers
 ** @args: arguments passed to the function
 **
 ** Return: Always 0.
 **/

int _print_int(va_list args)
{
	int num = 0;

	num = va_arg(args, int);
	fprintf(stdout, "%d\n", num);

	return (1);
}

