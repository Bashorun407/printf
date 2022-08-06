#include "main.h"

/*
 ** _print_string -  prints characters (strings) to standard output
 ** @args: arguments passed from va_list; from which out will be printed
 **
 ** Return: returns the number of items printed to standard output
 **/
int _print_string(va_list args)
{
	char *str;
	int j = 0;

	str = va_arg(args, char *);

	while (str[j] != '\0')
	{
		fprintf(stdout, "%c", str[j]);
		j++;
	}
	return (j);
}

