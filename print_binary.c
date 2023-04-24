#include "main.h"

/**
 * print_binary - prints a number in binary format
 * @x: number representing unsigned int value to print in binary format
 * Return: none
 */


void print_binary(unsigned int x)
{
	int i = 0, j, binary_digits[32];

	if (x == 0)
	{
		_putchar ('0');
		return;
	}

	while (x > 0)
	{
		binary_digits[i++] = x % 2;
		x /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary_digits[j] + '0');
	}
}

/**
 * print_binary_custom - handle custom conversion specifiers
 * @x: number representing unsigned int value to print in binary format
 * @format: pointer to string containing binary number
 * Return: number of binary numbers printed
 */

int print_binary_custom(const char *format, unsigned int x)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'b')
			{
				print_binary(x);
				count += sizeof(unsigned int) * 8;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
