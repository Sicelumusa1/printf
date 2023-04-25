#include "main.h"

/**
 * _output_oct - prints representation of a number in octal base
 * @num: number to be printed in octal base
 * Return: symbols printed to stdout
 */

int _output_oct(unsigned int num)
{
	unsigned int len;
	char *octal_rep;
	char * rev_str;

	if(num == 0)
	{
		return (_putchar('0'));
	}
	if (num < 1)
	{
		return (-1);
	}
	len = oct_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
	{
		return (-1);
	}
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
	{
		return (-1);
	}

	_write(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}
