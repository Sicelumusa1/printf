#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * Return: the number of characters printed
 * @format: is a character string.
 */

int _printf(const char *format, ...)
{
	int index, char_count = 0, precision, width;
	va_list args;

	va_start(args, format);

	/*checks if pointers points to NULL*/
	if (format == NULL)
	{
		return (-1);
	}

	/*loop of the arguments*/
	for (index = 0; format[index]; index++)
	{
		/*checks if the current character is a format specifier %*/
		if (format[index] == '%')
		{
			index++;
			precision = -1;
			width = -1;

			if (format[index] == 'c')
			{
				char_count += _putchar(va_arg(args, int));
			}
			else if (format[index] == 's')
			{
				char_count += _puts(va_arg(args, char *));
			}
			else if (format[index] == 'i' || format[index] == 'd')
			{
				int n = va_args(args, int);

				handle_precision(&precision, &width, &index, format, args);
				char_count += _print_int(n, width, precision);
			}
			else if (format[index] == '%')
			{
				char_count += _putchar('%');
			}
		}
		else
		{
			char_count += _putchar(format[index]);
		}
	}
	va_end(args);
	return (char_count);
}
