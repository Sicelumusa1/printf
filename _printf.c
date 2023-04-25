#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * Return: the number of characters printed
 * @format: is a character string.
 */ 

int _printf(const char *format, ...)
{
	int index, char_count = 0, len;
	va_list args;
	char *str;

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
				char_count += _print_int(va_arg(args, int));

			}
			else if (format[index] == 'b')
			{
				print_binary(va_arg(args, unsigned int));
				char_count += sizeof(unsigned int) * 8;
			}
			else if (format[index] == 'u')
			{
				char_count += _output_unsigned_integer(va_arg(args, unsigned int));
			}
			else if (format[index] == 'o')
			{
				char_count += _output_oct(va_arg(args, unsigned int));
			}
			else if (format[index] == 'x')
			{
				char_count += low_hex(va_arg(args, unsigned int));
			}
			else if (format[index] == 'X')
			{
				char_count += uppr_hex(va_arg(args, unsigned int));
			}
			else if (format[index] == 'r')
			{
				str = va_arg(args, char *);
				char_count += _output_rev(str);
			}
			else if (format[index] == 'R')
			{
				len = _strlen(args);
				char_count += _output_rot13(va_arg(args, char *), len);
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
