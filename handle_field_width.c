#include "main.h"

/**
 * handle_field_width - handless the field width for non-custom
 * conversion specifiers
 * @format: pointer to string
 * @i: pointer to index of format string
 * @lst: container for list of arguments
 * @width: pointer to variable that stores the width for conversion specifier
 */

void handle_field_width(const char *format, int *i, va_list lst, char *width)
{
	*width = get_width(format, i, lst);
}
