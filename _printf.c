#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * Return: the number of characters printed
 * @format: is a character string.
 */

int _printf(const char *format, ...)
{
	int index, char_count = 0, len, j;
	va_list args;
	char *str;
	int buffer_count = 0;
	char buffer[BUFFER_SIZE];

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
				buffer[buffer_count] = (char)va_arg(args, int);
				buffer_count++;
			}
			else if (format[index] == 's')
			{
				char *str = va_arg(args, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					buffer[buffer_count] = str[j];
					buffer_count++;
				}
			}
			else if (format[index] == 'i' || format[index] == 'd')
			{
				int n = va_arg(args, int);

				buffer_count += _putint(n);

			}
			else if (format[index] == 'b')
			{
				unsigned int n = va_arg(args, unsigned int);

				buffer_count += _putuint(n, 2);
			}
			else if (format[index] == 'u')
			{
				unsigned int n = va_arg(args, unsigned int);

				buffer_count += _putuint(n, 10);
			}
			else if (format[index] == 'o')
			{
				unsigned int n = va_arg(args, unsigned int);

				buffer_count += _putuint(n, 8);
			}
			else if (format[index] == 'x')
			{
				unsigned int n = va_arg(args, unsigned int);

				buffer_count += _putuint(n, 16);
			}
			else if (format[index] == 'X')
			{
				unsigned int n = va_arg(args, unsigned int);

				buffer_count = _putuint(n, -16);
			}
			else if (format[index] == 'p')
			{
				char_count += _output_pointer(va_arg(args, void *));
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
				buffer[buffer_count] = '%';
				buffer_count++;
			}
		}
		else
		{
			buffer[buffer_count] = format[index];
			buffer_count++;
		}
		if (buffer_count >= BUFFER_SIZE - 1)
		{
			char_count += write(STDOUT_FILENO, buffer, buffer_count);
				buffer_count = 0;
		}
	}
	char_count += write(STDOUT_FILENO, buffer, buffer_count);

	va_end(args);

	return (char_count);
}
