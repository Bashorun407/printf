#include "main.h"
/**
 ** _print_decimal - prints decimal (base 10)  numbers
 ** @value: the number to be printed to standard output
 **
 ** Return: returns the number of items printed
 **/
int _print_decimal(int value)
{
	int count = 0;

	/*print - for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * (-1);
	}

	/* first remove the last digit of number and print*/
	 /* the remaining digits by recursion, then print*/
	 /* the last digit*/

	if (value / 10)
		count += _print_decimal(value / 10);

	count += _putchar((value % 10) + '0');

	return (count);
}

