#include "main.h"

/**
 * handle_zero_flag - determines number of zeros after
 * to add before the actual number being printed
 * @buffer: temp memory for output
 * @buf_size: size of the buffer
 * @i: current index in buffer
 * @width: width specified in format string
 * @_isnegative: checks if number being printed is negative
 */

void handle_zero_flag(char *buffer, int *i, int buf_size, 
		int width, int precision, int _isnegative)
{
	int j;
	int num_padding_zeros = width - precision - _isnegative;

	if (num_padding_zeros > 0)
	{

		for (j = 0; j < num_padding_zeros; j++)
		{
			if (*i >= buf_size)
			{
				break;
			}
		}

		buffer[*i] = '0';
		(*i)++;
	}
}
