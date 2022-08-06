#include "main.h"

/*
 * _printf: prints characters to standard output
 * @format: pointer to character to be printed
 * @...: arguments to be passed to printf
 */
int _printf(const char * const format, ...)
{
	va_list args;
	char *str;

	int i = 0, j = 0, num = 0;
	str = NULL;
	int n_displayed = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			/* _putchar(format[i]); */
			fprintf(stdout, "%c", format[i]);
		else
		{
			/* format[i] == '%' and format[i + 1] == 'c' i.e. printing characters*/
			if (format[i + 1] == 'c')
			{
				i++;
				_print_char(args);
			}

			/* format[i] == '%' and format[i + 1] == 's' i.e. printing strings */
			else if (format[i + 1] == 's')
			{
				i++;
				_print_string(args);
			}

			/* for %% or \%, i.e. the next character (format[i + 1] == '%') to print is %*/
			else if (format[i + 1] == '%')
			{
				i++;
				_print_percent();
			}


			/* for %d i.e. to print integers */
			else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
			{
				i++;
				_print_int(args);
			}

			/* for %u i.e to print unsigned integers */
			else if (format[i + 1] == 'u')
			{
				i++;
				_print_uint(args);
			}
		}

		i++;
	}

	va_end(args);

	return (0);
}

