#include "main.h"

/*
 ** _print_char - prints single character to standard output
 ** @args: argument passed from va_list
 **
 ** Return: returns number of character printed
 **/
int _print_char(va_list args)
{
	int x;

	x = va_arg(args, int);

	fprintf(stdout, "%c", x);

	return (1);
}

