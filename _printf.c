#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * Return: the number of characters printed
 * @format: is a character string.
 */

int _printf(const char *format, ...)
{
	int index, char_count = 0;
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
				char_count += _print_int(va_args(args, int);
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
