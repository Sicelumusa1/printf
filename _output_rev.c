#include "main.h"

/**
 * _output_rev - a function that reverses a string
 * @str: the argument as str to output
 * Return: return the reverse string
 */

int _output_rev(char *str)
{
	int index, j;

	if (!str)
	{
		str = "(null)";
	}
	for (index = 0; str[index]; index++)
	{}

	for (j = index - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	return (index);
}
