#include "main.h"
#include <string.h>

/**
 * handle_custom_specifier_r - prints reversed string
 * @buffer: temp memory for output
 * @i: current index in buffer
 * @buf_size: size of buffer
 * @lst: container for list of args
 */

void handle_custom_specifier_r(char *buffer, int *i, int buf_size, va_list lst)
{
	int j;

	char *str = va_arg(lst, char *);

	int len = strlen(str);

	if (*i + len >= buf_size)
		return;

	for (j = len - 1; j >= 0; j--)
		buffer[(*i)++] = str[j];
}
