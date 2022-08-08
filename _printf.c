#include "main.h"

/*
 * _printf: prints characters to standard output
 * @format: pointer to character to be printed
 * @...: arguments to be passed to printf
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;
	va_start(data, format);


	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					i++;
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					i++;
					count += _print_string(va_arg(data, char *));
				case '%':
					i++;
					count += _putchar('%');
					break;
				default:
					break;
			}

			i++;
		}
	}

	return (count);
}

