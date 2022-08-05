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
				/* _putchar(va_arg(args, int)); */
				fprintf(stdout, "%c", va_arg(args, int));
				i++;
				return (1);
			}

			/* format[i] == '%' and format[i + 1] == 's' i.e. printing strings */
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				while (str[j] != '\0')
				{
					/* _putchar(str[j]); */
					fprintf(stdout, "%c", str[j]);
					j++;
				}
				return (j);

			}

			/* for %% or \%, i.e. the next character to print is %*/
			else if (format[i + 1] == '%')
			{
				i++;
				/* _putchar('%');*/
				fprintf(stdout, "%c", '%');
			}


			/* for %d i.e. to print integers */
			else if (format[i + 1] == 'd')
			{
				i++;
				return (_print_int(args));
			}
		}

		i++;
	}

	va_end(args);

	return (0);
}

