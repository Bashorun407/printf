#include "main.h"
/**
 ** _print_percent - prints single character to standard output
 **
 ** Return: returns number of character printed
 **/
int _print_percent(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* if the '%' is encountered, increment */
		/* prints the second '%' */
		if (str[i] == '%')
			i++;
		_putchar(str[i]);
		i++;
	}

	/* i is the number of characters printed */
	return (i);
}

