#include "main.h"
/**
 ** _print_string - prints characters (strings) to standard output
 ** @str: string argument that will be printed to standard output
 **
 ** Return: returns the number of character strings printed
 **/

int _print_string(char *str)
{
	int i = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}

	/* j is the number of string characters printed */
	return (count);
}

