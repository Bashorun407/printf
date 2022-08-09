#include "main.h"
/**
 ** _print_binary - a function that prints binary numbers
 ** @value: a number passed to the function
 **
 ** Return: Always 0
 **/
int _print_binary(int value)
{
	int i = 0, num = 0, count = 0;

	/*print - for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * (-1);
	}

	while (value / 10)
	{
		/* to check that the digits of the number is binary */
		if ((value % 10) + '0' > 1)
			return (0);
		num = (num * 10) + ((value % 10) + '0');
		value / 10;
		i++;
	}

	/* printing numbers in the correct order */
	while (i > 0)
	{
		count += _putchar((num % 10) + '0');
		num / 10;
		i--;
	}

	return (count);
}

