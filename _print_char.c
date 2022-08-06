#include "main.h"

/*
 ** _print_char - prints single character to standard output
 ** @args: argument passed from va_list
 **
 ** Return: returns number of character printed
 **/
int _print_char(va_list args)
{
	int num = 0;

	num = va_arg(args, int);

	fprintf(stdout, "%c", va_arg(args, int));

	return (1);
}

