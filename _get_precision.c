#include "main.h"

/**
 * get_precision - calculates the precision for printing
 * @format: srting pointer
 * @i: current index
 * @lst: args list container
 * Return: precision
 */

int get_precision(const char *format, int *i, va_list lst)
{
	int j = *i + 1;
	int precision = -1;

	if (format[j] != '.')
		return (precision);

	precision = 0;

	for (j = j + 1; format[j] != '\0'; j++)
	{
		if (_isdigit(format[j]))
		{
			precision *= 10;
			precision += format[j] - '0';
		}
		else if (format[j] == '*')
		{
			j++;
			precision = va_arg(lst, int);
			break;
		}
		else
			break;
	}

	*i = j - 1;

	return (precision);
}
