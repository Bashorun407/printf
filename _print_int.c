#include "main.h"
/**
 ** _print_int - prints integers
 ** @args: arguments passed to the function
 **
 ** Return: Always 0.
 **/

int _print_int(va_list args)
{
	int num = 0, i = 0, count = 0;
	char *ptr;

	num = va_arg(args, int);

	fprintf(stdout, "%d\n", num);

	while (num > 0)
	{
		/* _putchar() here prints numbers in reverse order */
		/*_putchar('0' + (num % 10));*/
		ptr[i] = '0' + (num % 10);
		i++;
		num /= 10;
	}

	return (i);
}

