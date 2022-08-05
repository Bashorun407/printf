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
	ptr = malloc(sizeof(*ptr) * num);
	/* code will be written here... */
	while (num > 0)
	{
		/* _putchar() here prints numbers in reverse order */
		/*_putchar('0' + (num % 10));*/
		ptr[i] = '0' + (num % 10);
		i++;
		num /= 10;
	}
	/* printing a new line */
	_putchar('\n');
	/* reducing i by 1 to avoid pointer overflow */
	i--;
	/* to print the numbers in the correct order */
	while (i >= 0)
	{
		/* _putchar(ptr[i]); */
		fprintf(stdout, "%d", ptr[i]);
		i--;
		count++;
	}
	/* free memory occupied by ptr */
	free(ptr);

	return (count);
}

