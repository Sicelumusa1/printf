#include "main.h"

/**
 * _output_pointer - prints a memory address.
 * Return: number of printed characters.
 * @ptr: pointer to print
 */

int _output_pointer(void *ptr)
{
	char *str = "(nil)";
	long int a;
	int b, index = 0;

	if (ptr == NULL)
	{
		while (str[index] != '\0')
		{
			_putchar(str[index]);
			index++;
		}
		return (index);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = uppr_hex(a);
	return (b + 2);
}
