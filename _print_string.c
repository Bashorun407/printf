#include "main.h"

/*
 ** _print_string -  prints characters (strings) to standard output
 ** @args: arguments passed from va_list; from which out will be printed
 **
 ** Return: returns the number of items printed to standard output
 **/
int _print_string(char *str)
{
	int i = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}

	/* add a semicolon here */
	return (count)
}

