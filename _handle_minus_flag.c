#include "main.h"

/**
 * handle_minus_flag - adds leading zeros to the buffeer
 * @buffer:temp memory tha stores output
 * @i: current index
 * @buf_size: max size of the buffer
 * @width: specified width of the field
 * @str_len: len of string being printed
 * @_isnegative: boolen flag checking number being processed negative
 */

void handle_minus_flag(char *buffer, int *i, int buf_size,
		int width, int str_len, int _isnegative)
{
	int j;
	int spaces = width - str_len - _isnegative;

	if (spaces > 0)
	{
		for (j = 0; j < spaces; j++)
		{
			if (*i >= buf_size)
			{
				break;
			}
			buffer[*i] = ' ';
			(*i)++;
		}
	}
}
