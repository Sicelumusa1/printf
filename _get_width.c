#include "main.h"

/**
 * get_width - dertemine width for printing
 * @format: string pointer
 * @i: current index (%)
 * @lst: container for args list
 * Return: width
 */

int get_width(const char *format, int *i, va_list lst)
{
	int j, width = 0;

	for (j = *i + 1; format[j] != '\0'; j++)
	{
		if (_isdigit(format[j]))
		{
			width *= 10;
			width += format[j] - '0';
		}
		else if (format[j] == '*')
		{
			j++;
			width = va_arg(lst, int);
			break;
		}
		else
			break;
	}

	*i = j + 1;
	return (width);
}
