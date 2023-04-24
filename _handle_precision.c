#include "main.h"

/**
 * handle_precision - Handle the precision for non-custom conversion specifiers
 * @format: pointer to string being processed
 * @i: current index
 * @lst: container for list of args being processed
 * @precision: pointer to int used to store precision fro conversion specifier
 */

void handle_precision(const char *format, int *i, va_list lst, int *precision)
{
	if (format[*i] == '.')
	{
		*precision = get_precision(format, i, lst);
	}
	else
	{
		*precision = -1;
	}
}
